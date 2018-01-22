#ifndef __EVENT_INCLUDE_GUARD__
#define __EVENT_INCLUDE_GUARD__

#include <deque>

#ifdef DEBUG_OUTPUT
#include <string>
#endif

namespace StateMachine {

  class Event {
  public:
    enum Type {
      BUTTON_LEFT,
      BUTTON_LEFT_HOLD,
      BUTTON_RIGHT,
      BUTTON_RIGHT_HOLD,
      CONNECTED,
      ENTER_SETTINGS,
      MOTOR_OFF,
      MOTOR_ON,
      NEXT,
      PAIRED,
      POWER_ASSIST_TOGGLE,
      POWER_OFF,
      POWER_ON,
      SCAN_APP,
      SELECT,
      START_OTA,
      TAP,
      TIMEOUT,
    }; // ENUMS GENERATED FROM MODEL

    /**
     * @brief Constructor for initializing the type.
     */
    Event ( Type t ) : _t(t) { }

    Type type ( void ) {
      return _t;
    }
    
    #ifdef DEBUG_OUTPUT
    static std::string toString( Event* e ) {
      std::string eventString = "";
      switch ( e->_t ) {
      case BUTTON_LEFT:
        eventString = "BUTTON_LEFT";
        break;
      case BUTTON_LEFT_HOLD:
        eventString = "BUTTON_LEFT_HOLD";
        break;
      case BUTTON_RIGHT:
        eventString = "BUTTON_RIGHT";
        break;
      case BUTTON_RIGHT_HOLD:
        eventString = "BUTTON_RIGHT_HOLD";
        break;
      case CONNECTED:
        eventString = "CONNECTED";
        break;
      case ENTER_SETTINGS:
        eventString = "ENTER_SETTINGS";
        break;
      case MOTOR_OFF:
        eventString = "MOTOR_OFF";
        break;
      case MOTOR_ON:
        eventString = "MOTOR_ON";
        break;
      case NEXT:
        eventString = "NEXT";
        break;
      case PAIRED:
        eventString = "PAIRED";
        break;
      case POWER_ASSIST_TOGGLE:
        eventString = "POWER_ASSIST_TOGGLE";
        break;
      case POWER_OFF:
        eventString = "POWER_OFF";
        break;
      case POWER_ON:
        eventString = "POWER_ON";
        break;
      case SCAN_APP:
        eventString = "SCAN_APP";
        break;
      case SELECT:
        eventString = "SELECT";
        break;
      case START_OTA:
        eventString = "START_OTA";
        break;
      case TAP:
        eventString = "TAP";
        break;
      case TIMEOUT:
        eventString = "TIMEOUT";
        break;
      default:
	break;
      }
      return eventString;
    }
    #endif
    
  protected:
    Type _t;
  };
  
  /**
   * @brief Class handling all Event creation, memory management, and
   *  ordering.
   */
  class EventFactory {
  public:
    /**
     * @brief Destructor; ensures all memory for all Events is
     * deallocated.
     */
    ~EventFactory( void ) {
      clearEvents();
    }

    /**
     * @brief Allocates new memory for a new Event of type t and adds
     * it to the Q.
     *
     * @param[in]  Event::Type  t  The type of the event to create
     */
    void                 spawnEvent   ( StateMachine::Event::Type t ) {
      StateMachine::Event* newEvent = new Event( t );
      _eventQ.push_back( newEvent );
    }

    /**
     * @brief Frees the memory associated with the Event.
     *
     * @param[in]  Event*       e  Pointer to the event to consume
     */
    void                 consumeEvent ( StateMachine::Event* e ) {
      delete e;
      e = 0;
    }

    /**
     * @brief Retrieves the pointer to the next event in the queue, or
     * 0 if the Q is empty.
     *
     * @return     Event*          Oldest Event that was in the Queue
     */
    StateMachine::Event *getNextEvent ( void ) {
      StateMachine::Event* ptr = 0;
      if (_eventQ.size()) {
	ptr = _eventQ.front();
	_eventQ.pop_front(); // remove the event from the Q
      }
      return ptr;
    }

    /**
     * @brief Clears the event queue and frees all memory associated
     * with the events.
     */
    void                clearEvents ( void ) {
      StateMachine::Event* ptr = getNextEvent();
      while (ptr != 0) {
	consumeEvent( ptr );
	ptr = getNextEvent();
      }
    }

    #ifdef DEBUG_OUTPUT
    std::string         toString    ( void ) {
      std::string qStr = "[ ";
      for (int i=0; i<_eventQ.size(); i++) {
	qStr += Event::toString( _eventQ[i] );
      }
      qStr += " ]";
      return qStr;
    }
    #endif

  protected:
    deque<StateMachine::Event*> _eventQ;
  };

};

extern StateMachine::EventFactory *const eventFactory;

#endif // __EVENT_INCLUDE_GUARD__
