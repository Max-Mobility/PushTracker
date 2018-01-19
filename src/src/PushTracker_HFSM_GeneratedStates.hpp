#ifndef __GENERATED_STATES_INCLUDE_GUARD__
#define __GENERATED_STATES_INCLUDE_GUARD__

#include "StateBase.hpp"
#include "DeepHistoryState.hpp"
#include "ShallowHistoryState.hpp"

// User Includes for the HFSM
//::::/c/B::::Includes::::
// here are some includes

namespace StateMachine {

  // ROOT OF THE HFSM
  class PushTracker_HFSM : public StateMachine::StateBase {
  public:

    // User Declarations for the HFSM
    //::::/c/B::::Declarations::::
      static bool SmartDrivePaired;
  static bool PhonePaired;
  static bool hasError;
  static bool lowBattery;

    // Child Substates
    /**
     * @brief Declaration for PushTracker_HFSM::On : /c/B/0
     *
     * States contain other states and can consume generic
     * StateMachine::Event objects if they have internal or external
     * transitions on those events and if those transitions' guards are
     * satisfied. Only one transition can consume an event in a given
     * state machine.
     *
     * There is also a different kind of Event, the tick event, which is
     * not consumed, but instead executes from the top-level state all
     * the way to the curently active leaf state.
     *
     * Entry and Exit actions also occur whenever a state is entered or
     * exited, respectively.
     */
    class On : public StateMachine::StateBase {
    public:
    
      /**
       * @brief Declaration for PushTracker_HFSM::On::Power_Assist_Toggle : /c/B/0/7
       *
       * States contain other states and can consume generic
       * StateMachine::Event objects if they have internal or external
       * transitions on those events and if those transitions' guards are
       * satisfied. Only one transition can consume an event in a given
       * state machine.
       *
       * There is also a different kind of Event, the tick event, which is
       * not consumed, but instead executes from the top-level state all
       * the way to the curently active leaf state.
       *
       * Entry and Exit actions also occur whenever a state is entered or
       * exited, respectively.
       */
      class Power_Assist_Toggle : public StateMachine::StateBase {
      public:
      
        
        // Timer period
        static const double timerPeriod;
      
        // Constructors
        Power_Assist_Toggle  ( void ) : StateBase( ) {}
        Power_Assist_Toggle  ( StateBase* _parent ) : StateBase( _parent ) {}
        ~Power_Assist_Toggle ( void ) {}
      
        /**
         * @brief Calls entry() then handles any child
         *  initialization. Finally calls makeActive on the leaf.
         */
        void                     initialize ( void );
          
        /**
         * @brief Runs the entry() function defined in the model.
         */
        void                     entry ( void );
      
        /**
         * @brief Runs the exit() function defined in the model.
         */
        void                     exit ( void );
      
        /**
         * @brief Runs the tick() function defined in the model and then
         *  calls _activeState->tick().
         */
        void                     tick ( void );
      
        /**
         * @brief The timer period of the state in floating point seconds.
         *
         * @return  double  timer period
         */
        double                   getTimerPeriod ( void );
      
        /**
         * @brief Calls _activeState->handleEvent( event ), then if the
         *  event is not nullptr (meaning the event was not consumed by
         *  the child subtree), it checks the event against all internal
         *  transitions associated with that Event.  If the event is still
         *  not a nullptr (meaning the event was not consumed by the
         *  internal transitions), then it checks the event against all
         *  external transitions associated with that Event.
         *
         * @param[in] StateMachine::Event* Event needing to be handled
         *
         * @return true if event is consumed, false otherwise
         */
        bool                     handleEvent ( StateMachine::Event* event );
      };
      /**
       * @brief Declaration for PushTracker_HFSM::On::Display_Logo : /c/B/0/B
       *
       * States contain other states and can consume generic
       * StateMachine::Event objects if they have internal or external
       * transitions on those events and if those transitions' guards are
       * satisfied. Only one transition can consume an event in a given
       * state machine.
       *
       * There is also a different kind of Event, the tick event, which is
       * not consumed, but instead executes from the top-level state all
       * the way to the curently active leaf state.
       *
       * Entry and Exit actions also occur whenever a state is entered or
       * exited, respectively.
       */
      class Display_Logo : public StateMachine::StateBase {
      public:
      
        
        // Timer period
        static const double timerPeriod;
      
        // Constructors
        Display_Logo  ( void ) : StateBase( ) {}
        Display_Logo  ( StateBase* _parent ) : StateBase( _parent ) {}
        ~Display_Logo ( void ) {}
      
        /**
         * @brief Calls entry() then handles any child
         *  initialization. Finally calls makeActive on the leaf.
         */
        void                     initialize ( void );
          
        /**
         * @brief Runs the entry() function defined in the model.
         */
        void                     entry ( void );
      
        /**
         * @brief Runs the exit() function defined in the model.
         */
        void                     exit ( void );
      
        /**
         * @brief Runs the tick() function defined in the model and then
         *  calls _activeState->tick().
         */
        void                     tick ( void );
      
        /**
         * @brief The timer period of the state in floating point seconds.
         *
         * @return  double  timer period
         */
        double                   getTimerPeriod ( void );
      
        /**
         * @brief Calls _activeState->handleEvent( event ), then if the
         *  event is not nullptr (meaning the event was not consumed by
         *  the child subtree), it checks the event against all internal
         *  transitions associated with that Event.  If the event is still
         *  not a nullptr (meaning the event was not consumed by the
         *  internal transitions), then it checks the event against all
         *  external transitions associated with that Event.
         *
         * @param[in] StateMachine::Event* Event needing to be handled
         *
         * @return true if event is consumed, false otherwise
         */
        bool                     handleEvent ( StateMachine::Event* event );
      };
      /**
       * @brief Declaration for PushTracker_HFSM::On::Idle : /c/B/0/N
       *
       * States contain other states and can consume generic
       * StateMachine::Event objects if they have internal or external
       * transitions on those events and if those transitions' guards are
       * satisfied. Only one transition can consume an event in a given
       * state machine.
       *
       * There is also a different kind of Event, the tick event, which is
       * not consumed, but instead executes from the top-level state all
       * the way to the curently active leaf state.
       *
       * Entry and Exit actions also occur whenever a state is entered or
       * exited, respectively.
       */
      class Idle : public StateMachine::StateBase {
      public:
      
        
        // Timer period
        static const double timerPeriod;
      
        // Constructors
        Idle  ( void ) : StateBase( ) {}
        Idle  ( StateBase* _parent ) : StateBase( _parent ) {}
        ~Idle ( void ) {}
      
        /**
         * @brief Calls entry() then handles any child
         *  initialization. Finally calls makeActive on the leaf.
         */
        void                     initialize ( void );
          
        /**
         * @brief Runs the entry() function defined in the model.
         */
        void                     entry ( void );
      
        /**
         * @brief Runs the exit() function defined in the model.
         */
        void                     exit ( void );
      
        /**
         * @brief Runs the tick() function defined in the model and then
         *  calls _activeState->tick().
         */
        void                     tick ( void );
      
        /**
         * @brief The timer period of the state in floating point seconds.
         *
         * @return  double  timer period
         */
        double                   getTimerPeriod ( void );
      
        /**
         * @brief Calls _activeState->handleEvent( event ), then if the
         *  event is not nullptr (meaning the event was not consumed by
         *  the child subtree), it checks the event against all internal
         *  transitions associated with that Event.  If the event is still
         *  not a nullptr (meaning the event was not consumed by the
         *  internal transitions), then it checks the event against all
         *  external transitions associated with that Event.
         *
         * @param[in] StateMachine::Event* Event needing to be handled
         *
         * @return true if event is consumed, false otherwise
         */
        bool                     handleEvent ( StateMachine::Event* event );
      };
      /**
       * @brief Declaration for PushTracker_HFSM::On::Settings : /c/B/0/c
       *
       * States contain other states and can consume generic
       * StateMachine::Event objects if they have internal or external
       * transitions on those events and if those transitions' guards are
       * satisfied. Only one transition can consume an event in a given
       * state machine.
       *
       * There is also a different kind of Event, the tick event, which is
       * not consumed, but instead executes from the top-level state all
       * the way to the curently active leaf state.
       *
       * Entry and Exit actions also occur whenever a state is entered or
       * exited, respectively.
       */
      class Settings : public StateMachine::StateBase {
      public:
      
        /**
         * @brief Declaration for PushTracker_HFSM::On::Settings::Pair_SmartDrive : /c/B/0/c/3
         *
         * States contain other states and can consume generic
         * StateMachine::Event objects if they have internal or external
         * transitions on those events and if those transitions' guards are
         * satisfied. Only one transition can consume an event in a given
         * state machine.
         *
         * There is also a different kind of Event, the tick event, which is
         * not consumed, but instead executes from the top-level state all
         * the way to the curently active leaf state.
         *
         * Entry and Exit actions also occur whenever a state is entered or
         * exited, respectively.
         */
        class Pair_SmartDrive : public StateMachine::StateBase {
        public:
        
          /**
           * @brief Declaration for PushTracker_HFSM::On::Settings::Pair_SmartDrive::Pairing : /c/B/0/c/3/s
           *
           * States contain other states and can consume generic
           * StateMachine::Event objects if they have internal or external
           * transitions on those events and if those transitions' guards are
           * satisfied. Only one transition can consume an event in a given
           * state machine.
           *
           * There is also a different kind of Event, the tick event, which is
           * not consumed, but instead executes from the top-level state all
           * the way to the curently active leaf state.
           *
           * Entry and Exit actions also occur whenever a state is entered or
           * exited, respectively.
           */
          class Pairing : public StateMachine::StateBase {
          public:
          
            
            // Timer period
            static const double timerPeriod;
          
            // Constructors
            Pairing  ( void ) : StateBase( ) {}
            Pairing  ( StateBase* _parent ) : StateBase( _parent ) {}
            ~Pairing ( void ) {}
          
            /**
             * @brief Calls entry() then handles any child
             *  initialization. Finally calls makeActive on the leaf.
             */
            void                     initialize ( void );
              
            /**
             * @brief Runs the entry() function defined in the model.
             */
            void                     entry ( void );
          
            /**
             * @brief Runs the exit() function defined in the model.
             */
            void                     exit ( void );
          
            /**
             * @brief Runs the tick() function defined in the model and then
             *  calls _activeState->tick().
             */
            void                     tick ( void );
          
            /**
             * @brief The timer period of the state in floating point seconds.
             *
             * @return  double  timer period
             */
            double                   getTimerPeriod ( void );
          
            /**
             * @brief Calls _activeState->handleEvent( event ), then if the
             *  event is not nullptr (meaning the event was not consumed by
             *  the child subtree), it checks the event against all internal
             *  transitions associated with that Event.  If the event is still
             *  not a nullptr (meaning the event was not consumed by the
             *  internal transitions), then it checks the event against all
             *  external transitions associated with that Event.
             *
             * @param[in] StateMachine::Event* Event needing to be handled
             *
             * @return true if event is consumed, false otherwise
             */
            bool                     handleEvent ( StateMachine::Event* event );
          };
          /**
           * @brief Declaration for PushTracker_HFSM::On::Settings::Pair_SmartDrive::Icon : /c/B/0/c/3/K
           *
           * States contain other states and can consume generic
           * StateMachine::Event objects if they have internal or external
           * transitions on those events and if those transitions' guards are
           * satisfied. Only one transition can consume an event in a given
           * state machine.
           *
           * There is also a different kind of Event, the tick event, which is
           * not consumed, but instead executes from the top-level state all
           * the way to the curently active leaf state.
           *
           * Entry and Exit actions also occur whenever a state is entered or
           * exited, respectively.
           */
          class Icon : public StateMachine::StateBase {
          public:
          
            
            // Timer period
            static const double timerPeriod;
          
            // Constructors
            Icon  ( void ) : StateBase( ) {}
            Icon  ( StateBase* _parent ) : StateBase( _parent ) {}
            ~Icon ( void ) {}
          
            /**
             * @brief Calls entry() then handles any child
             *  initialization. Finally calls makeActive on the leaf.
             */
            void                     initialize ( void );
              
            /**
             * @brief Runs the entry() function defined in the model.
             */
            void                     entry ( void );
          
            /**
             * @brief Runs the exit() function defined in the model.
             */
            void                     exit ( void );
          
            /**
             * @brief Runs the tick() function defined in the model and then
             *  calls _activeState->tick().
             */
            void                     tick ( void );
          
            /**
             * @brief The timer period of the state in floating point seconds.
             *
             * @return  double  timer period
             */
            double                   getTimerPeriod ( void );
          
            /**
             * @brief Calls _activeState->handleEvent( event ), then if the
             *  event is not nullptr (meaning the event was not consumed by
             *  the child subtree), it checks the event against all internal
             *  transitions associated with that Event.  If the event is still
             *  not a nullptr (meaning the event was not consumed by the
             *  internal transitions), then it checks the event against all
             *  external transitions associated with that Event.
             *
             * @param[in] StateMachine::Event* Event needing to be handled
             *
             * @return true if event is consumed, false otherwise
             */
            bool                     handleEvent ( StateMachine::Event* event );
          };
          
          // Timer period
          static const double timerPeriod;
        
          // Constructors
          Pair_SmartDrive  ( void ) : StateBase( ) {}
          Pair_SmartDrive  ( StateBase* _parent ) : StateBase( _parent ) {}
          ~Pair_SmartDrive ( void ) {}
        
          /**
           * @brief Calls entry() then handles any child
           *  initialization. Finally calls makeActive on the leaf.
           */
          void                     initialize ( void );
            
          /**
           * @brief Runs the entry() function defined in the model.
           */
          void                     entry ( void );
        
          /**
           * @brief Runs the exit() function defined in the model.
           */
          void                     exit ( void );
        
          /**
           * @brief Runs the tick() function defined in the model and then
           *  calls _activeState->tick().
           */
          void                     tick ( void );
        
          /**
           * @brief The timer period of the state in floating point seconds.
           *
           * @return  double  timer period
           */
          double                   getTimerPeriod ( void );
        
          /**
           * @brief Calls _activeState->handleEvent( event ), then if the
           *  event is not nullptr (meaning the event was not consumed by
           *  the child subtree), it checks the event against all internal
           *  transitions associated with that Event.  If the event is still
           *  not a nullptr (meaning the event was not consumed by the
           *  internal transitions), then it checks the event against all
           *  external transitions associated with that Event.
           *
           * @param[in] StateMachine::Event* Event needing to be handled
           *
           * @return true if event is consumed, false otherwise
           */
          bool                     handleEvent ( StateMachine::Event* event );
        };
        /**
         * @brief Declaration for PushTracker_HFSM::On::Settings::Exit : /c/B/0/c/6
         *
         * States contain other states and can consume generic
         * StateMachine::Event objects if they have internal or external
         * transitions on those events and if those transitions' guards are
         * satisfied. Only one transition can consume an event in a given
         * state machine.
         *
         * There is also a different kind of Event, the tick event, which is
         * not consumed, but instead executes from the top-level state all
         * the way to the curently active leaf state.
         *
         * Entry and Exit actions also occur whenever a state is entered or
         * exited, respectively.
         */
        class Exit : public StateMachine::StateBase {
        public:
        
          
          // Timer period
          static const double timerPeriod;
        
          // Constructors
          Exit  ( void ) : StateBase( ) {}
          Exit  ( StateBase* _parent ) : StateBase( _parent ) {}
          ~Exit ( void ) {}
        
          /**
           * @brief Calls entry() then handles any child
           *  initialization. Finally calls makeActive on the leaf.
           */
          void                     initialize ( void );
            
          /**
           * @brief Runs the entry() function defined in the model.
           */
          void                     entry ( void );
        
          /**
           * @brief Runs the exit() function defined in the model.
           */
          void                     exit ( void );
        
          /**
           * @brief Runs the tick() function defined in the model and then
           *  calls _activeState->tick().
           */
          void                     tick ( void );
        
          /**
           * @brief The timer period of the state in floating point seconds.
           *
           * @return  double  timer period
           */
          double                   getTimerPeriod ( void );
        
          /**
           * @brief Calls _activeState->handleEvent( event ), then if the
           *  event is not nullptr (meaning the event was not consumed by
           *  the child subtree), it checks the event against all internal
           *  transitions associated with that Event.  If the event is still
           *  not a nullptr (meaning the event was not consumed by the
           *  internal transitions), then it checks the event against all
           *  external transitions associated with that Event.
           *
           * @param[in] StateMachine::Event* Event needing to be handled
           *
           * @return true if event is consumed, false otherwise
           */
          bool                     handleEvent ( StateMachine::Event* event );
        };
        /**
         * @brief Declaration for PushTracker_HFSM::On::Settings::Pair_Phone : /c/B/0/c/E
         *
         * States contain other states and can consume generic
         * StateMachine::Event objects if they have internal or external
         * transitions on those events and if those transitions' guards are
         * satisfied. Only one transition can consume an event in a given
         * state machine.
         *
         * There is also a different kind of Event, the tick event, which is
         * not consumed, but instead executes from the top-level state all
         * the way to the curently active leaf state.
         *
         * Entry and Exit actions also occur whenever a state is entered or
         * exited, respectively.
         */
        class Pair_Phone : public StateMachine::StateBase {
        public:
        
          /**
           * @brief Declaration for PushTracker_HFSM::On::Settings::Pair_Phone::Pairing : /c/B/0/c/E/k
           *
           * States contain other states and can consume generic
           * StateMachine::Event objects if they have internal or external
           * transitions on those events and if those transitions' guards are
           * satisfied. Only one transition can consume an event in a given
           * state machine.
           *
           * There is also a different kind of Event, the tick event, which is
           * not consumed, but instead executes from the top-level state all
           * the way to the curently active leaf state.
           *
           * Entry and Exit actions also occur whenever a state is entered or
           * exited, respectively.
           */
          class Pairing : public StateMachine::StateBase {
          public:
          
            
            // Timer period
            static const double timerPeriod;
          
            // Constructors
            Pairing  ( void ) : StateBase( ) {}
            Pairing  ( StateBase* _parent ) : StateBase( _parent ) {}
            ~Pairing ( void ) {}
          
            /**
             * @brief Calls entry() then handles any child
             *  initialization. Finally calls makeActive on the leaf.
             */
            void                     initialize ( void );
              
            /**
             * @brief Runs the entry() function defined in the model.
             */
            void                     entry ( void );
          
            /**
             * @brief Runs the exit() function defined in the model.
             */
            void                     exit ( void );
          
            /**
             * @brief Runs the tick() function defined in the model and then
             *  calls _activeState->tick().
             */
            void                     tick ( void );
          
            /**
             * @brief The timer period of the state in floating point seconds.
             *
             * @return  double  timer period
             */
            double                   getTimerPeriod ( void );
          
            /**
             * @brief Calls _activeState->handleEvent( event ), then if the
             *  event is not nullptr (meaning the event was not consumed by
             *  the child subtree), it checks the event against all internal
             *  transitions associated with that Event.  If the event is still
             *  not a nullptr (meaning the event was not consumed by the
             *  internal transitions), then it checks the event against all
             *  external transitions associated with that Event.
             *
             * @param[in] StateMachine::Event* Event needing to be handled
             *
             * @return true if event is consumed, false otherwise
             */
            bool                     handleEvent ( StateMachine::Event* event );
          };
          /**
           * @brief Declaration for PushTracker_HFSM::On::Settings::Pair_Phone::Icon : /c/B/0/c/E/b
           *
           * States contain other states and can consume generic
           * StateMachine::Event objects if they have internal or external
           * transitions on those events and if those transitions' guards are
           * satisfied. Only one transition can consume an event in a given
           * state machine.
           *
           * There is also a different kind of Event, the tick event, which is
           * not consumed, but instead executes from the top-level state all
           * the way to the curently active leaf state.
           *
           * Entry and Exit actions also occur whenever a state is entered or
           * exited, respectively.
           */
          class Icon : public StateMachine::StateBase {
          public:
          
            
            // Timer period
            static const double timerPeriod;
          
            // Constructors
            Icon  ( void ) : StateBase( ) {}
            Icon  ( StateBase* _parent ) : StateBase( _parent ) {}
            ~Icon ( void ) {}
          
            /**
             * @brief Calls entry() then handles any child
             *  initialization. Finally calls makeActive on the leaf.
             */
            void                     initialize ( void );
              
            /**
             * @brief Runs the entry() function defined in the model.
             */
            void                     entry ( void );
          
            /**
             * @brief Runs the exit() function defined in the model.
             */
            void                     exit ( void );
          
            /**
             * @brief Runs the tick() function defined in the model and then
             *  calls _activeState->tick().
             */
            void                     tick ( void );
          
            /**
             * @brief The timer period of the state in floating point seconds.
             *
             * @return  double  timer period
             */
            double                   getTimerPeriod ( void );
          
            /**
             * @brief Calls _activeState->handleEvent( event ), then if the
             *  event is not nullptr (meaning the event was not consumed by
             *  the child subtree), it checks the event against all internal
             *  transitions associated with that Event.  If the event is still
             *  not a nullptr (meaning the event was not consumed by the
             *  internal transitions), then it checks the event against all
             *  external transitions associated with that Event.
             *
             * @param[in] StateMachine::Event* Event needing to be handled
             *
             * @return true if event is consumed, false otherwise
             */
            bool                     handleEvent ( StateMachine::Event* event );
          };
          
          // Timer period
          static const double timerPeriod;
        
          // Constructors
          Pair_Phone  ( void ) : StateBase( ) {}
          Pair_Phone  ( StateBase* _parent ) : StateBase( _parent ) {}
          ~Pair_Phone ( void ) {}
        
          /**
           * @brief Calls entry() then handles any child
           *  initialization. Finally calls makeActive on the leaf.
           */
          void                     initialize ( void );
            
          /**
           * @brief Runs the entry() function defined in the model.
           */
          void                     entry ( void );
        
          /**
           * @brief Runs the exit() function defined in the model.
           */
          void                     exit ( void );
        
          /**
           * @brief Runs the tick() function defined in the model and then
           *  calls _activeState->tick().
           */
          void                     tick ( void );
        
          /**
           * @brief The timer period of the state in floating point seconds.
           *
           * @return  double  timer period
           */
          double                   getTimerPeriod ( void );
        
          /**
           * @brief Calls _activeState->handleEvent( event ), then if the
           *  event is not nullptr (meaning the event was not consumed by
           *  the child subtree), it checks the event against all internal
           *  transitions associated with that Event.  If the event is still
           *  not a nullptr (meaning the event was not consumed by the
           *  internal transitions), then it checks the event against all
           *  external transitions associated with that Event.
           *
           * @param[in] StateMachine::Event* Event needing to be handled
           *
           * @return true if event is consumed, false otherwise
           */
          bool                     handleEvent ( StateMachine::Event* event );
        };
        /**
         * @brief Declaration for PushTracker_HFSM::On::Settings::Icon : /c/B/0/c/k
         *
         * States contain other states and can consume generic
         * StateMachine::Event objects if they have internal or external
         * transitions on those events and if those transitions' guards are
         * satisfied. Only one transition can consume an event in a given
         * state machine.
         *
         * There is also a different kind of Event, the tick event, which is
         * not consumed, but instead executes from the top-level state all
         * the way to the curently active leaf state.
         *
         * Entry and Exit actions also occur whenever a state is entered or
         * exited, respectively.
         */
        class Icon : public StateMachine::StateBase {
        public:
        
          
          // Timer period
          static const double timerPeriod;
        
          // Constructors
          Icon  ( void ) : StateBase( ) {}
          Icon  ( StateBase* _parent ) : StateBase( _parent ) {}
          ~Icon ( void ) {}
        
          /**
           * @brief Calls entry() then handles any child
           *  initialization. Finally calls makeActive on the leaf.
           */
          void                     initialize ( void );
            
          /**
           * @brief Runs the entry() function defined in the model.
           */
          void                     entry ( void );
        
          /**
           * @brief Runs the exit() function defined in the model.
           */
          void                     exit ( void );
        
          /**
           * @brief Runs the tick() function defined in the model and then
           *  calls _activeState->tick().
           */
          void                     tick ( void );
        
          /**
           * @brief The timer period of the state in floating point seconds.
           *
           * @return  double  timer period
           */
          double                   getTimerPeriod ( void );
        
          /**
           * @brief Calls _activeState->handleEvent( event ), then if the
           *  event is not nullptr (meaning the event was not consumed by
           *  the child subtree), it checks the event against all internal
           *  transitions associated with that Event.  If the event is still
           *  not a nullptr (meaning the event was not consumed by the
           *  internal transitions), then it checks the event against all
           *  external transitions associated with that Event.
           *
           * @param[in] StateMachine::Event* Event needing to be handled
           *
           * @return true if event is consumed, false otherwise
           */
          bool                     handleEvent ( StateMachine::Event* event );
        };
        /**
         * @brief Declaration for PushTracker_HFSM::On::Settings::SmartDrive : /c/B/0/c/b
         *
         * States contain other states and can consume generic
         * StateMachine::Event objects if they have internal or external
         * transitions on those events and if those transitions' guards are
         * satisfied. Only one transition can consume an event in a given
         * state machine.
         *
         * There is also a different kind of Event, the tick event, which is
         * not consumed, but instead executes from the top-level state all
         * the way to the curently active leaf state.
         *
         * Entry and Exit actions also occur whenever a state is entered or
         * exited, respectively.
         */
        class SmartDrive : public StateMachine::StateBase {
        public:
        
          /**
           * @brief Declaration for PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity : /c/B/0/c/b/4
           *
           * States contain other states and can consume generic
           * StateMachine::Event objects if they have internal or external
           * transitions on those events and if those transitions' guards are
           * satisfied. Only one transition can consume an event in a given
           * state machine.
           *
           * There is also a different kind of Event, the tick event, which is
           * not consumed, but instead executes from the top-level state all
           * the way to the curently active leaf state.
           *
           * Entry and Exit actions also occur whenever a state is entered or
           * exited, respectively.
           */
          class Tap_Sensitivity : public StateMachine::StateBase {
          public:
          
            /**
             * @brief Declaration for PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Icon : /c/B/0/c/b/4/8
             *
             * States contain other states and can consume generic
             * StateMachine::Event objects if they have internal or external
             * transitions on those events and if those transitions' guards are
             * satisfied. Only one transition can consume an event in a given
             * state machine.
             *
             * There is also a different kind of Event, the tick event, which is
             * not consumed, but instead executes from the top-level state all
             * the way to the curently active leaf state.
             *
             * Entry and Exit actions also occur whenever a state is entered or
             * exited, respectively.
             */
            class Icon : public StateMachine::StateBase {
            public:
            
              
              // Timer period
              static const double timerPeriod;
            
              // Constructors
              Icon  ( void ) : StateBase( ) {}
              Icon  ( StateBase* _parent ) : StateBase( _parent ) {}
              ~Icon ( void ) {}
            
              /**
               * @brief Calls entry() then handles any child
               *  initialization. Finally calls makeActive on the leaf.
               */
              void                     initialize ( void );
                
              /**
               * @brief Runs the entry() function defined in the model.
               */
              void                     entry ( void );
            
              /**
               * @brief Runs the exit() function defined in the model.
               */
              void                     exit ( void );
            
              /**
               * @brief Runs the tick() function defined in the model and then
               *  calls _activeState->tick().
               */
              void                     tick ( void );
            
              /**
               * @brief The timer period of the state in floating point seconds.
               *
               * @return  double  timer period
               */
              double                   getTimerPeriod ( void );
            
              /**
               * @brief Calls _activeState->handleEvent( event ), then if the
               *  event is not nullptr (meaning the event was not consumed by
               *  the child subtree), it checks the event against all internal
               *  transitions associated with that Event.  If the event is still
               *  not a nullptr (meaning the event was not consumed by the
               *  internal transitions), then it checks the event against all
               *  external transitions associated with that Event.
               *
               * @param[in] StateMachine::Event* Event needing to be handled
               *
               * @return true if event is consumed, false otherwise
               */
              bool                     handleEvent ( StateMachine::Event* event );
            };
            /**
             * @brief Declaration for PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Set_Tap_Sensitivity : /c/B/0/c/b/4/Q
             *
             * States contain other states and can consume generic
             * StateMachine::Event objects if they have internal or external
             * transitions on those events and if those transitions' guards are
             * satisfied. Only one transition can consume an event in a given
             * state machine.
             *
             * There is also a different kind of Event, the tick event, which is
             * not consumed, but instead executes from the top-level state all
             * the way to the curently active leaf state.
             *
             * Entry and Exit actions also occur whenever a state is entered or
             * exited, respectively.
             */
            class Set_Tap_Sensitivity : public StateMachine::StateBase {
            public:
            
              
              // Timer period
              static const double timerPeriod;
            
              // Constructors
              Set_Tap_Sensitivity  ( void ) : StateBase( ) {}
              Set_Tap_Sensitivity  ( StateBase* _parent ) : StateBase( _parent ) {}
              ~Set_Tap_Sensitivity ( void ) {}
            
              /**
               * @brief Calls entry() then handles any child
               *  initialization. Finally calls makeActive on the leaf.
               */
              void                     initialize ( void );
                
              /**
               * @brief Runs the entry() function defined in the model.
               */
              void                     entry ( void );
            
              /**
               * @brief Runs the exit() function defined in the model.
               */
              void                     exit ( void );
            
              /**
               * @brief Runs the tick() function defined in the model and then
               *  calls _activeState->tick().
               */
              void                     tick ( void );
            
              /**
               * @brief The timer period of the state in floating point seconds.
               *
               * @return  double  timer period
               */
              double                   getTimerPeriod ( void );
            
              /**
               * @brief Calls _activeState->handleEvent( event ), then if the
               *  event is not nullptr (meaning the event was not consumed by
               *  the child subtree), it checks the event against all internal
               *  transitions associated with that Event.  If the event is still
               *  not a nullptr (meaning the event was not consumed by the
               *  internal transitions), then it checks the event against all
               *  external transitions associated with that Event.
               *
               * @param[in] StateMachine::Event* Event needing to be handled
               *
               * @return true if event is consumed, false otherwise
               */
              bool                     handleEvent ( StateMachine::Event* event );
            };
            
            // Timer period
            static const double timerPeriod;
          
            // Constructors
            Tap_Sensitivity  ( void ) : StateBase( ) {}
            Tap_Sensitivity  ( StateBase* _parent ) : StateBase( _parent ) {}
            ~Tap_Sensitivity ( void ) {}
          
            /**
             * @brief Calls entry() then handles any child
             *  initialization. Finally calls makeActive on the leaf.
             */
            void                     initialize ( void );
              
            /**
             * @brief Runs the entry() function defined in the model.
             */
            void                     entry ( void );
          
            /**
             * @brief Runs the exit() function defined in the model.
             */
            void                     exit ( void );
          
            /**
             * @brief Runs the tick() function defined in the model and then
             *  calls _activeState->tick().
             */
            void                     tick ( void );
          
            /**
             * @brief The timer period of the state in floating point seconds.
             *
             * @return  double  timer period
             */
            double                   getTimerPeriod ( void );
          
            /**
             * @brief Calls _activeState->handleEvent( event ), then if the
             *  event is not nullptr (meaning the event was not consumed by
             *  the child subtree), it checks the event against all internal
             *  transitions associated with that Event.  If the event is still
             *  not a nullptr (meaning the event was not consumed by the
             *  internal transitions), then it checks the event against all
             *  external transitions associated with that Event.
             *
             * @param[in] StateMachine::Event* Event needing to be handled
             *
             * @return true if event is consumed, false otherwise
             */
            bool                     handleEvent ( StateMachine::Event* event );
          };
          /**
           * @brief Declaration for PushTracker_HFSM::On::Settings::SmartDrive::Icon : /c/B/0/c/b/td
           *
           * States contain other states and can consume generic
           * StateMachine::Event objects if they have internal or external
           * transitions on those events and if those transitions' guards are
           * satisfied. Only one transition can consume an event in a given
           * state machine.
           *
           * There is also a different kind of Event, the tick event, which is
           * not consumed, but instead executes from the top-level state all
           * the way to the curently active leaf state.
           *
           * Entry and Exit actions also occur whenever a state is entered or
           * exited, respectively.
           */
          class Icon : public StateMachine::StateBase {
          public:
          
            
            // Timer period
            static const double timerPeriod;
          
            // Constructors
            Icon  ( void ) : StateBase( ) {}
            Icon  ( StateBase* _parent ) : StateBase( _parent ) {}
            ~Icon ( void ) {}
          
            /**
             * @brief Calls entry() then handles any child
             *  initialization. Finally calls makeActive on the leaf.
             */
            void                     initialize ( void );
              
            /**
             * @brief Runs the entry() function defined in the model.
             */
            void                     entry ( void );
          
            /**
             * @brief Runs the exit() function defined in the model.
             */
            void                     exit ( void );
          
            /**
             * @brief Runs the tick() function defined in the model and then
             *  calls _activeState->tick().
             */
            void                     tick ( void );
          
            /**
             * @brief The timer period of the state in floating point seconds.
             *
             * @return  double  timer period
             */
            double                   getTimerPeriod ( void );
          
            /**
             * @brief Calls _activeState->handleEvent( event ), then if the
             *  event is not nullptr (meaning the event was not consumed by
             *  the child subtree), it checks the event against all internal
             *  transitions associated with that Event.  If the event is still
             *  not a nullptr (meaning the event was not consumed by the
             *  internal transitions), then it checks the event against all
             *  external transitions associated with that Event.
             *
             * @param[in] StateMachine::Event* Event needing to be handled
             *
             * @return true if event is consumed, false otherwise
             */
            bool                     handleEvent ( StateMachine::Event* event );
          };
          /**
           * @brief Declaration for PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed : /c/B/0/c/b/G
           *
           * States contain other states and can consume generic
           * StateMachine::Event objects if they have internal or external
           * transitions on those events and if those transitions' guards are
           * satisfied. Only one transition can consume an event in a given
           * state machine.
           *
           * There is also a different kind of Event, the tick event, which is
           * not consumed, but instead executes from the top-level state all
           * the way to the curently active leaf state.
           *
           * Entry and Exit actions also occur whenever a state is entered or
           * exited, respectively.
           */
          class Max_Speed : public StateMachine::StateBase {
          public:
          
            /**
             * @brief Declaration for PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Set_Max_Speed : /c/B/0/c/b/G/m
             *
             * States contain other states and can consume generic
             * StateMachine::Event objects if they have internal or external
             * transitions on those events and if those transitions' guards are
             * satisfied. Only one transition can consume an event in a given
             * state machine.
             *
             * There is also a different kind of Event, the tick event, which is
             * not consumed, but instead executes from the top-level state all
             * the way to the curently active leaf state.
             *
             * Entry and Exit actions also occur whenever a state is entered or
             * exited, respectively.
             */
            class Set_Max_Speed : public StateMachine::StateBase {
            public:
            
              
              // Timer period
              static const double timerPeriod;
            
              // Constructors
              Set_Max_Speed  ( void ) : StateBase( ) {}
              Set_Max_Speed  ( StateBase* _parent ) : StateBase( _parent ) {}
              ~Set_Max_Speed ( void ) {}
            
              /**
               * @brief Calls entry() then handles any child
               *  initialization. Finally calls makeActive on the leaf.
               */
              void                     initialize ( void );
                
              /**
               * @brief Runs the entry() function defined in the model.
               */
              void                     entry ( void );
            
              /**
               * @brief Runs the exit() function defined in the model.
               */
              void                     exit ( void );
            
              /**
               * @brief Runs the tick() function defined in the model and then
               *  calls _activeState->tick().
               */
              void                     tick ( void );
            
              /**
               * @brief The timer period of the state in floating point seconds.
               *
               * @return  double  timer period
               */
              double                   getTimerPeriod ( void );
            
              /**
               * @brief Calls _activeState->handleEvent( event ), then if the
               *  event is not nullptr (meaning the event was not consumed by
               *  the child subtree), it checks the event against all internal
               *  transitions associated with that Event.  If the event is still
               *  not a nullptr (meaning the event was not consumed by the
               *  internal transitions), then it checks the event against all
               *  external transitions associated with that Event.
               *
               * @param[in] StateMachine::Event* Event needing to be handled
               *
               * @return true if event is consumed, false otherwise
               */
              bool                     handleEvent ( StateMachine::Event* event );
            };
            /**
             * @brief Declaration for PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Icon : /c/B/0/c/b/G/S
             *
             * States contain other states and can consume generic
             * StateMachine::Event objects if they have internal or external
             * transitions on those events and if those transitions' guards are
             * satisfied. Only one transition can consume an event in a given
             * state machine.
             *
             * There is also a different kind of Event, the tick event, which is
             * not consumed, but instead executes from the top-level state all
             * the way to the curently active leaf state.
             *
             * Entry and Exit actions also occur whenever a state is entered or
             * exited, respectively.
             */
            class Icon : public StateMachine::StateBase {
            public:
            
              
              // Timer period
              static const double timerPeriod;
            
              // Constructors
              Icon  ( void ) : StateBase( ) {}
              Icon  ( StateBase* _parent ) : StateBase( _parent ) {}
              ~Icon ( void ) {}
            
              /**
               * @brief Calls entry() then handles any child
               *  initialization. Finally calls makeActive on the leaf.
               */
              void                     initialize ( void );
                
              /**
               * @brief Runs the entry() function defined in the model.
               */
              void                     entry ( void );
            
              /**
               * @brief Runs the exit() function defined in the model.
               */
              void                     exit ( void );
            
              /**
               * @brief Runs the tick() function defined in the model and then
               *  calls _activeState->tick().
               */
              void                     tick ( void );
            
              /**
               * @brief The timer period of the state in floating point seconds.
               *
               * @return  double  timer period
               */
              double                   getTimerPeriod ( void );
            
              /**
               * @brief Calls _activeState->handleEvent( event ), then if the
               *  event is not nullptr (meaning the event was not consumed by
               *  the child subtree), it checks the event against all internal
               *  transitions associated with that Event.  If the event is still
               *  not a nullptr (meaning the event was not consumed by the
               *  internal transitions), then it checks the event against all
               *  external transitions associated with that Event.
               *
               * @param[in] StateMachine::Event* Event needing to be handled
               *
               * @return true if event is consumed, false otherwise
               */
              bool                     handleEvent ( StateMachine::Event* event );
            };
            
            // Timer period
            static const double timerPeriod;
          
            // Constructors
            Max_Speed  ( void ) : StateBase( ) {}
            Max_Speed  ( StateBase* _parent ) : StateBase( _parent ) {}
            ~Max_Speed ( void ) {}
          
            /**
             * @brief Calls entry() then handles any child
             *  initialization. Finally calls makeActive on the leaf.
             */
            void                     initialize ( void );
              
            /**
             * @brief Runs the entry() function defined in the model.
             */
            void                     entry ( void );
          
            /**
             * @brief Runs the exit() function defined in the model.
             */
            void                     exit ( void );
          
            /**
             * @brief Runs the tick() function defined in the model and then
             *  calls _activeState->tick().
             */
            void                     tick ( void );
          
            /**
             * @brief The timer period of the state in floating point seconds.
             *
             * @return  double  timer period
             */
            double                   getTimerPeriod ( void );
          
            /**
             * @brief Calls _activeState->handleEvent( event ), then if the
             *  event is not nullptr (meaning the event was not consumed by
             *  the child subtree), it checks the event against all internal
             *  transitions associated with that Event.  If the event is still
             *  not a nullptr (meaning the event was not consumed by the
             *  internal transitions), then it checks the event against all
             *  external transitions associated with that Event.
             *
             * @param[in] StateMachine::Event* Event needing to be handled
             *
             * @return true if event is consumed, false otherwise
             */
            bool                     handleEvent ( StateMachine::Event* event );
          };
          /**
           * @brief Declaration for PushTracker_HFSM::On::Settings::SmartDrive::Acceleration : /c/B/0/c/b/k
           *
           * States contain other states and can consume generic
           * StateMachine::Event objects if they have internal or external
           * transitions on those events and if those transitions' guards are
           * satisfied. Only one transition can consume an event in a given
           * state machine.
           *
           * There is also a different kind of Event, the tick event, which is
           * not consumed, but instead executes from the top-level state all
           * the way to the curently active leaf state.
           *
           * Entry and Exit actions also occur whenever a state is entered or
           * exited, respectively.
           */
          class Acceleration : public StateMachine::StateBase {
          public:
          
            /**
             * @brief Declaration for PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Icon : /c/B/0/c/b/k/8
             *
             * States contain other states and can consume generic
             * StateMachine::Event objects if they have internal or external
             * transitions on those events and if those transitions' guards are
             * satisfied. Only one transition can consume an event in a given
             * state machine.
             *
             * There is also a different kind of Event, the tick event, which is
             * not consumed, but instead executes from the top-level state all
             * the way to the curently active leaf state.
             *
             * Entry and Exit actions also occur whenever a state is entered or
             * exited, respectively.
             */
            class Icon : public StateMachine::StateBase {
            public:
            
              
              // Timer period
              static const double timerPeriod;
            
              // Constructors
              Icon  ( void ) : StateBase( ) {}
              Icon  ( StateBase* _parent ) : StateBase( _parent ) {}
              ~Icon ( void ) {}
            
              /**
               * @brief Calls entry() then handles any child
               *  initialization. Finally calls makeActive on the leaf.
               */
              void                     initialize ( void );
                
              /**
               * @brief Runs the entry() function defined in the model.
               */
              void                     entry ( void );
            
              /**
               * @brief Runs the exit() function defined in the model.
               */
              void                     exit ( void );
            
              /**
               * @brief Runs the tick() function defined in the model and then
               *  calls _activeState->tick().
               */
              void                     tick ( void );
            
              /**
               * @brief The timer period of the state in floating point seconds.
               *
               * @return  double  timer period
               */
              double                   getTimerPeriod ( void );
            
              /**
               * @brief Calls _activeState->handleEvent( event ), then if the
               *  event is not nullptr (meaning the event was not consumed by
               *  the child subtree), it checks the event against all internal
               *  transitions associated with that Event.  If the event is still
               *  not a nullptr (meaning the event was not consumed by the
               *  internal transitions), then it checks the event against all
               *  external transitions associated with that Event.
               *
               * @param[in] StateMachine::Event* Event needing to be handled
               *
               * @return true if event is consumed, false otherwise
               */
              bool                     handleEvent ( StateMachine::Event* event );
            };
            /**
             * @brief Declaration for PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Set_Acceleration : /c/B/0/c/b/k/X
             *
             * States contain other states and can consume generic
             * StateMachine::Event objects if they have internal or external
             * transitions on those events and if those transitions' guards are
             * satisfied. Only one transition can consume an event in a given
             * state machine.
             *
             * There is also a different kind of Event, the tick event, which is
             * not consumed, but instead executes from the top-level state all
             * the way to the curently active leaf state.
             *
             * Entry and Exit actions also occur whenever a state is entered or
             * exited, respectively.
             */
            class Set_Acceleration : public StateMachine::StateBase {
            public:
            
              
              // Timer period
              static const double timerPeriod;
            
              // Constructors
              Set_Acceleration  ( void ) : StateBase( ) {}
              Set_Acceleration  ( StateBase* _parent ) : StateBase( _parent ) {}
              ~Set_Acceleration ( void ) {}
            
              /**
               * @brief Calls entry() then handles any child
               *  initialization. Finally calls makeActive on the leaf.
               */
              void                     initialize ( void );
                
              /**
               * @brief Runs the entry() function defined in the model.
               */
              void                     entry ( void );
            
              /**
               * @brief Runs the exit() function defined in the model.
               */
              void                     exit ( void );
            
              /**
               * @brief Runs the tick() function defined in the model and then
               *  calls _activeState->tick().
               */
              void                     tick ( void );
            
              /**
               * @brief The timer period of the state in floating point seconds.
               *
               * @return  double  timer period
               */
              double                   getTimerPeriod ( void );
            
              /**
               * @brief Calls _activeState->handleEvent( event ), then if the
               *  event is not nullptr (meaning the event was not consumed by
               *  the child subtree), it checks the event against all internal
               *  transitions associated with that Event.  If the event is still
               *  not a nullptr (meaning the event was not consumed by the
               *  internal transitions), then it checks the event against all
               *  external transitions associated with that Event.
               *
               * @param[in] StateMachine::Event* Event needing to be handled
               *
               * @return true if event is consumed, false otherwise
               */
              bool                     handleEvent ( StateMachine::Event* event );
            };
            
            // Timer period
            static const double timerPeriod;
          
            // Constructors
            Acceleration  ( void ) : StateBase( ) {}
            Acceleration  ( StateBase* _parent ) : StateBase( _parent ) {}
            ~Acceleration ( void ) {}
          
            /**
             * @brief Calls entry() then handles any child
             *  initialization. Finally calls makeActive on the leaf.
             */
            void                     initialize ( void );
              
            /**
             * @brief Runs the entry() function defined in the model.
             */
            void                     entry ( void );
          
            /**
             * @brief Runs the exit() function defined in the model.
             */
            void                     exit ( void );
          
            /**
             * @brief Runs the tick() function defined in the model and then
             *  calls _activeState->tick().
             */
            void                     tick ( void );
          
            /**
             * @brief The timer period of the state in floating point seconds.
             *
             * @return  double  timer period
             */
            double                   getTimerPeriod ( void );
          
            /**
             * @brief Calls _activeState->handleEvent( event ), then if the
             *  event is not nullptr (meaning the event was not consumed by
             *  the child subtree), it checks the event against all internal
             *  transitions associated with that Event.  If the event is still
             *  not a nullptr (meaning the event was not consumed by the
             *  internal transitions), then it checks the event against all
             *  external transitions associated with that Event.
             *
             * @param[in] StateMachine::Event* Event needing to be handled
             *
             * @return true if event is consumed, false otherwise
             */
            bool                     handleEvent ( StateMachine::Event* event );
          };
          /**
           * @brief Declaration for PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode : /c/B/0/c/b/J
           *
           * States contain other states and can consume generic
           * StateMachine::Event objects if they have internal or external
           * transitions on those events and if those transitions' guards are
           * satisfied. Only one transition can consume an event in a given
           * state machine.
           *
           * There is also a different kind of Event, the tick event, which is
           * not consumed, but instead executes from the top-level state all
           * the way to the curently active leaf state.
           *
           * Entry and Exit actions also occur whenever a state is entered or
           * exited, respectively.
           */
          class Control_Mode : public StateMachine::StateBase {
          public:
          
            /**
             * @brief Declaration for PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_Control_Mode : /c/B/0/c/b/J/p
             *
             * States contain other states and can consume generic
             * StateMachine::Event objects if they have internal or external
             * transitions on those events and if those transitions' guards are
             * satisfied. Only one transition can consume an event in a given
             * state machine.
             *
             * There is also a different kind of Event, the tick event, which is
             * not consumed, but instead executes from the top-level state all
             * the way to the curently active leaf state.
             *
             * Entry and Exit actions also occur whenever a state is entered or
             * exited, respectively.
             */
            class Set_Control_Mode : public StateMachine::StateBase {
            public:
            
              
              // Timer period
              static const double timerPeriod;
            
              // Constructors
              Set_Control_Mode  ( void ) : StateBase( ) {}
              Set_Control_Mode  ( StateBase* _parent ) : StateBase( _parent ) {}
              ~Set_Control_Mode ( void ) {}
            
              /**
               * @brief Calls entry() then handles any child
               *  initialization. Finally calls makeActive on the leaf.
               */
              void                     initialize ( void );
                
              /**
               * @brief Runs the entry() function defined in the model.
               */
              void                     entry ( void );
            
              /**
               * @brief Runs the exit() function defined in the model.
               */
              void                     exit ( void );
            
              /**
               * @brief Runs the tick() function defined in the model and then
               *  calls _activeState->tick().
               */
              void                     tick ( void );
            
              /**
               * @brief The timer period of the state in floating point seconds.
               *
               * @return  double  timer period
               */
              double                   getTimerPeriod ( void );
            
              /**
               * @brief Calls _activeState->handleEvent( event ), then if the
               *  event is not nullptr (meaning the event was not consumed by
               *  the child subtree), it checks the event against all internal
               *  transitions associated with that Event.  If the event is still
               *  not a nullptr (meaning the event was not consumed by the
               *  internal transitions), then it checks the event against all
               *  external transitions associated with that Event.
               *
               * @param[in] StateMachine::Event* Event needing to be handled
               *
               * @return true if event is consumed, false otherwise
               */
              bool                     handleEvent ( StateMachine::Event* event );
            };
            /**
             * @brief Declaration for PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_EZ_On : /c/B/0/c/b/J/e
             *
             * States contain other states and can consume generic
             * StateMachine::Event objects if they have internal or external
             * transitions on those events and if those transitions' guards are
             * satisfied. Only one transition can consume an event in a given
             * state machine.
             *
             * There is also a different kind of Event, the tick event, which is
             * not consumed, but instead executes from the top-level state all
             * the way to the curently active leaf state.
             *
             * Entry and Exit actions also occur whenever a state is entered or
             * exited, respectively.
             */
            class Set_EZ_On : public StateMachine::StateBase {
            public:
            
              
              // Timer period
              static const double timerPeriod;
            
              // Constructors
              Set_EZ_On  ( void ) : StateBase( ) {}
              Set_EZ_On  ( StateBase* _parent ) : StateBase( _parent ) {}
              ~Set_EZ_On ( void ) {}
            
              /**
               * @brief Calls entry() then handles any child
               *  initialization. Finally calls makeActive on the leaf.
               */
              void                     initialize ( void );
                
              /**
               * @brief Runs the entry() function defined in the model.
               */
              void                     entry ( void );
            
              /**
               * @brief Runs the exit() function defined in the model.
               */
              void                     exit ( void );
            
              /**
               * @brief Runs the tick() function defined in the model and then
               *  calls _activeState->tick().
               */
              void                     tick ( void );
            
              /**
               * @brief The timer period of the state in floating point seconds.
               *
               * @return  double  timer period
               */
              double                   getTimerPeriod ( void );
            
              /**
               * @brief Calls _activeState->handleEvent( event ), then if the
               *  event is not nullptr (meaning the event was not consumed by
               *  the child subtree), it checks the event against all internal
               *  transitions associated with that Event.  If the event is still
               *  not a nullptr (meaning the event was not consumed by the
               *  internal transitions), then it checks the event against all
               *  external transitions associated with that Event.
               *
               * @param[in] StateMachine::Event* Event needing to be handled
               *
               * @return true if event is consumed, false otherwise
               */
              bool                     handleEvent ( StateMachine::Event* event );
            };
            /**
             * @brief Declaration for PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Icon : /c/B/0/c/b/J/M
             *
             * States contain other states and can consume generic
             * StateMachine::Event objects if they have internal or external
             * transitions on those events and if those transitions' guards are
             * satisfied. Only one transition can consume an event in a given
             * state machine.
             *
             * There is also a different kind of Event, the tick event, which is
             * not consumed, but instead executes from the top-level state all
             * the way to the curently active leaf state.
             *
             * Entry and Exit actions also occur whenever a state is entered or
             * exited, respectively.
             */
            class Icon : public StateMachine::StateBase {
            public:
            
              
              // Timer period
              static const double timerPeriod;
            
              // Constructors
              Icon  ( void ) : StateBase( ) {}
              Icon  ( StateBase* _parent ) : StateBase( _parent ) {}
              ~Icon ( void ) {}
            
              /**
               * @brief Calls entry() then handles any child
               *  initialization. Finally calls makeActive on the leaf.
               */
              void                     initialize ( void );
                
              /**
               * @brief Runs the entry() function defined in the model.
               */
              void                     entry ( void );
            
              /**
               * @brief Runs the exit() function defined in the model.
               */
              void                     exit ( void );
            
              /**
               * @brief Runs the tick() function defined in the model and then
               *  calls _activeState->tick().
               */
              void                     tick ( void );
            
              /**
               * @brief The timer period of the state in floating point seconds.
               *
               * @return  double  timer period
               */
              double                   getTimerPeriod ( void );
            
              /**
               * @brief Calls _activeState->handleEvent( event ), then if the
               *  event is not nullptr (meaning the event was not consumed by
               *  the child subtree), it checks the event against all internal
               *  transitions associated with that Event.  If the event is still
               *  not a nullptr (meaning the event was not consumed by the
               *  internal transitions), then it checks the event against all
               *  external transitions associated with that Event.
               *
               * @param[in] StateMachine::Event* Event needing to be handled
               *
               * @return true if event is consumed, false otherwise
               */
              bool                     handleEvent ( StateMachine::Event* event );
            };
            
            // Timer period
            static const double timerPeriod;
          
            // Constructors
            Control_Mode  ( void ) : StateBase( ) {}
            Control_Mode  ( StateBase* _parent ) : StateBase( _parent ) {}
            ~Control_Mode ( void ) {}
          
            /**
             * @brief Calls entry() then handles any child
             *  initialization. Finally calls makeActive on the leaf.
             */
            void                     initialize ( void );
              
            /**
             * @brief Runs the entry() function defined in the model.
             */
            void                     entry ( void );
          
            /**
             * @brief Runs the exit() function defined in the model.
             */
            void                     exit ( void );
          
            /**
             * @brief Runs the tick() function defined in the model and then
             *  calls _activeState->tick().
             */
            void                     tick ( void );
          
            /**
             * @brief The timer period of the state in floating point seconds.
             *
             * @return  double  timer period
             */
            double                   getTimerPeriod ( void );
          
            /**
             * @brief Calls _activeState->handleEvent( event ), then if the
             *  event is not nullptr (meaning the event was not consumed by
             *  the child subtree), it checks the event against all internal
             *  transitions associated with that Event.  If the event is still
             *  not a nullptr (meaning the event was not consumed by the
             *  internal transitions), then it checks the event against all
             *  external transitions associated with that Event.
             *
             * @param[in] StateMachine::Event* Event needing to be handled
             *
             * @return true if event is consumed, false otherwise
             */
            bool                     handleEvent ( StateMachine::Event* event );
          };
          /**
           * @brief Declaration for PushTracker_HFSM::On::Settings::SmartDrive::Exit : /c/B/0/c/b/c
           *
           * States contain other states and can consume generic
           * StateMachine::Event objects if they have internal or external
           * transitions on those events and if those transitions' guards are
           * satisfied. Only one transition can consume an event in a given
           * state machine.
           *
           * There is also a different kind of Event, the tick event, which is
           * not consumed, but instead executes from the top-level state all
           * the way to the curently active leaf state.
           *
           * Entry and Exit actions also occur whenever a state is entered or
           * exited, respectively.
           */
          class Exit : public StateMachine::StateBase {
          public:
          
            
            // Timer period
            static const double timerPeriod;
          
            // Constructors
            Exit  ( void ) : StateBase( ) {}
            Exit  ( StateBase* _parent ) : StateBase( _parent ) {}
            ~Exit ( void ) {}
          
            /**
             * @brief Calls entry() then handles any child
             *  initialization. Finally calls makeActive on the leaf.
             */
            void                     initialize ( void );
              
            /**
             * @brief Runs the entry() function defined in the model.
             */
            void                     entry ( void );
          
            /**
             * @brief Runs the exit() function defined in the model.
             */
            void                     exit ( void );
          
            /**
             * @brief Runs the tick() function defined in the model and then
             *  calls _activeState->tick().
             */
            void                     tick ( void );
          
            /**
             * @brief The timer period of the state in floating point seconds.
             *
             * @return  double  timer period
             */
            double                   getTimerPeriod ( void );
          
            /**
             * @brief Calls _activeState->handleEvent( event ), then if the
             *  event is not nullptr (meaning the event was not consumed by
             *  the child subtree), it checks the event against all internal
             *  transitions associated with that Event.  If the event is still
             *  not a nullptr (meaning the event was not consumed by the
             *  internal transitions), then it checks the event against all
             *  external transitions associated with that Event.
             *
             * @param[in] StateMachine::Event* Event needing to be handled
             *
             * @return true if event is consumed, false otherwise
             */
            bool                     handleEvent ( StateMachine::Event* event );
          };
          
          // Timer period
          static const double timerPeriod;
        
          // Constructors
          SmartDrive  ( void ) : StateBase( ) {}
          SmartDrive  ( StateBase* _parent ) : StateBase( _parent ) {}
          ~SmartDrive ( void ) {}
        
          /**
           * @brief Calls entry() then handles any child
           *  initialization. Finally calls makeActive on the leaf.
           */
          void                     initialize ( void );
            
          /**
           * @brief Runs the entry() function defined in the model.
           */
          void                     entry ( void );
        
          /**
           * @brief Runs the exit() function defined in the model.
           */
          void                     exit ( void );
        
          /**
           * @brief Runs the tick() function defined in the model and then
           *  calls _activeState->tick().
           */
          void                     tick ( void );
        
          /**
           * @brief The timer period of the state in floating point seconds.
           *
           * @return  double  timer period
           */
          double                   getTimerPeriod ( void );
        
          /**
           * @brief Calls _activeState->handleEvent( event ), then if the
           *  event is not nullptr (meaning the event was not consumed by
           *  the child subtree), it checks the event against all internal
           *  transitions associated with that Event.  If the event is still
           *  not a nullptr (meaning the event was not consumed by the
           *  internal transitions), then it checks the event against all
           *  external transitions associated with that Event.
           *
           * @param[in] StateMachine::Event* Event needing to be handled
           *
           * @return true if event is consumed, false otherwise
           */
          bool                     handleEvent ( StateMachine::Event* event );
        };
        /**
         * @brief Declaration for PushTracker_HFSM::On::Settings::Time : /c/B/0/c/m
         *
         * States contain other states and can consume generic
         * StateMachine::Event objects if they have internal or external
         * transitions on those events and if those transitions' guards are
         * satisfied. Only one transition can consume an event in a given
         * state machine.
         *
         * There is also a different kind of Event, the tick event, which is
         * not consumed, but instead executes from the top-level state all
         * the way to the curently active leaf state.
         *
         * Entry and Exit actions also occur whenever a state is entered or
         * exited, respectively.
         */
        class Time : public StateMachine::StateBase {
        public:
        
          /**
           * @brief Declaration for PushTracker_HFSM::On::Settings::Time::Set_Time : /c/B/0/c/m/R
           *
           * States contain other states and can consume generic
           * StateMachine::Event objects if they have internal or external
           * transitions on those events and if those transitions' guards are
           * satisfied. Only one transition can consume an event in a given
           * state machine.
           *
           * There is also a different kind of Event, the tick event, which is
           * not consumed, but instead executes from the top-level state all
           * the way to the curently active leaf state.
           *
           * Entry and Exit actions also occur whenever a state is entered or
           * exited, respectively.
           */
          class Set_Time : public StateMachine::StateBase {
          public:
          
            /**
             * @brief Declaration for PushTracker_HFSM::On::Settings::Time::Set_Time::Minutes : /c/B/0/c/m/R/1
             *
             * States contain other states and can consume generic
             * StateMachine::Event objects if they have internal or external
             * transitions on those events and if those transitions' guards are
             * satisfied. Only one transition can consume an event in a given
             * state machine.
             *
             * There is also a different kind of Event, the tick event, which is
             * not consumed, but instead executes from the top-level state all
             * the way to the curently active leaf state.
             *
             * Entry and Exit actions also occur whenever a state is entered or
             * exited, respectively.
             */
            class Minutes : public StateMachine::StateBase {
            public:
            
              
              // Timer period
              static const double timerPeriod;
            
              // Constructors
              Minutes  ( void ) : StateBase( ) {}
              Minutes  ( StateBase* _parent ) : StateBase( _parent ) {}
              ~Minutes ( void ) {}
            
              /**
               * @brief Calls entry() then handles any child
               *  initialization. Finally calls makeActive on the leaf.
               */
              void                     initialize ( void );
                
              /**
               * @brief Runs the entry() function defined in the model.
               */
              void                     entry ( void );
            
              /**
               * @brief Runs the exit() function defined in the model.
               */
              void                     exit ( void );
            
              /**
               * @brief Runs the tick() function defined in the model and then
               *  calls _activeState->tick().
               */
              void                     tick ( void );
            
              /**
               * @brief The timer period of the state in floating point seconds.
               *
               * @return  double  timer period
               */
              double                   getTimerPeriod ( void );
            
              /**
               * @brief Calls _activeState->handleEvent( event ), then if the
               *  event is not nullptr (meaning the event was not consumed by
               *  the child subtree), it checks the event against all internal
               *  transitions associated with that Event.  If the event is still
               *  not a nullptr (meaning the event was not consumed by the
               *  internal transitions), then it checks the event against all
               *  external transitions associated with that Event.
               *
               * @param[in] StateMachine::Event* Event needing to be handled
               *
               * @return true if event is consumed, false otherwise
               */
              bool                     handleEvent ( StateMachine::Event* event );
            };
            /**
             * @brief Declaration for PushTracker_HFSM::On::Settings::Time::Set_Time::Ten_Minutes : /c/B/0/c/m/R/I
             *
             * States contain other states and can consume generic
             * StateMachine::Event objects if they have internal or external
             * transitions on those events and if those transitions' guards are
             * satisfied. Only one transition can consume an event in a given
             * state machine.
             *
             * There is also a different kind of Event, the tick event, which is
             * not consumed, but instead executes from the top-level state all
             * the way to the curently active leaf state.
             *
             * Entry and Exit actions also occur whenever a state is entered or
             * exited, respectively.
             */
            class Ten_Minutes : public StateMachine::StateBase {
            public:
            
              
              // Timer period
              static const double timerPeriod;
            
              // Constructors
              Ten_Minutes  ( void ) : StateBase( ) {}
              Ten_Minutes  ( StateBase* _parent ) : StateBase( _parent ) {}
              ~Ten_Minutes ( void ) {}
            
              /**
               * @brief Calls entry() then handles any child
               *  initialization. Finally calls makeActive on the leaf.
               */
              void                     initialize ( void );
                
              /**
               * @brief Runs the entry() function defined in the model.
               */
              void                     entry ( void );
            
              /**
               * @brief Runs the exit() function defined in the model.
               */
              void                     exit ( void );
            
              /**
               * @brief Runs the tick() function defined in the model and then
               *  calls _activeState->tick().
               */
              void                     tick ( void );
            
              /**
               * @brief The timer period of the state in floating point seconds.
               *
               * @return  double  timer period
               */
              double                   getTimerPeriod ( void );
            
              /**
               * @brief Calls _activeState->handleEvent( event ), then if the
               *  event is not nullptr (meaning the event was not consumed by
               *  the child subtree), it checks the event against all internal
               *  transitions associated with that Event.  If the event is still
               *  not a nullptr (meaning the event was not consumed by the
               *  internal transitions), then it checks the event against all
               *  external transitions associated with that Event.
               *
               * @param[in] StateMachine::Event* Event needing to be handled
               *
               * @return true if event is consumed, false otherwise
               */
              bool                     handleEvent ( StateMachine::Event* event );
            };
            /**
             * @brief Declaration for PushTracker_HFSM::On::Settings::Time::Set_Time::Format : /c/B/0/c/m/R/q
             *
             * States contain other states and can consume generic
             * StateMachine::Event objects if they have internal or external
             * transitions on those events and if those transitions' guards are
             * satisfied. Only one transition can consume an event in a given
             * state machine.
             *
             * There is also a different kind of Event, the tick event, which is
             * not consumed, but instead executes from the top-level state all
             * the way to the curently active leaf state.
             *
             * Entry and Exit actions also occur whenever a state is entered or
             * exited, respectively.
             */
            class Format : public StateMachine::StateBase {
            public:
            
              
              // Timer period
              static const double timerPeriod;
            
              // Constructors
              Format  ( void ) : StateBase( ) {}
              Format  ( StateBase* _parent ) : StateBase( _parent ) {}
              ~Format ( void ) {}
            
              /**
               * @brief Calls entry() then handles any child
               *  initialization. Finally calls makeActive on the leaf.
               */
              void                     initialize ( void );
                
              /**
               * @brief Runs the entry() function defined in the model.
               */
              void                     entry ( void );
            
              /**
               * @brief Runs the exit() function defined in the model.
               */
              void                     exit ( void );
            
              /**
               * @brief Runs the tick() function defined in the model and then
               *  calls _activeState->tick().
               */
              void                     tick ( void );
            
              /**
               * @brief The timer period of the state in floating point seconds.
               *
               * @return  double  timer period
               */
              double                   getTimerPeriod ( void );
            
              /**
               * @brief Calls _activeState->handleEvent( event ), then if the
               *  event is not nullptr (meaning the event was not consumed by
               *  the child subtree), it checks the event against all internal
               *  transitions associated with that Event.  If the event is still
               *  not a nullptr (meaning the event was not consumed by the
               *  internal transitions), then it checks the event against all
               *  external transitions associated with that Event.
               *
               * @param[in] StateMachine::Event* Event needing to be handled
               *
               * @return true if event is consumed, false otherwise
               */
              bool                     handleEvent ( StateMachine::Event* event );
            };
            /**
             * @brief Declaration for PushTracker_HFSM::On::Settings::Time::Set_Time::Hours : /c/B/0/c/m/R/b
             *
             * States contain other states and can consume generic
             * StateMachine::Event objects if they have internal or external
             * transitions on those events and if those transitions' guards are
             * satisfied. Only one transition can consume an event in a given
             * state machine.
             *
             * There is also a different kind of Event, the tick event, which is
             * not consumed, but instead executes from the top-level state all
             * the way to the curently active leaf state.
             *
             * Entry and Exit actions also occur whenever a state is entered or
             * exited, respectively.
             */
            class Hours : public StateMachine::StateBase {
            public:
            
              
              // Timer period
              static const double timerPeriod;
            
              // Constructors
              Hours  ( void ) : StateBase( ) {}
              Hours  ( StateBase* _parent ) : StateBase( _parent ) {}
              ~Hours ( void ) {}
            
              /**
               * @brief Calls entry() then handles any child
               *  initialization. Finally calls makeActive on the leaf.
               */
              void                     initialize ( void );
                
              /**
               * @brief Runs the entry() function defined in the model.
               */
              void                     entry ( void );
            
              /**
               * @brief Runs the exit() function defined in the model.
               */
              void                     exit ( void );
            
              /**
               * @brief Runs the tick() function defined in the model and then
               *  calls _activeState->tick().
               */
              void                     tick ( void );
            
              /**
               * @brief The timer period of the state in floating point seconds.
               *
               * @return  double  timer period
               */
              double                   getTimerPeriod ( void );
            
              /**
               * @brief Calls _activeState->handleEvent( event ), then if the
               *  event is not nullptr (meaning the event was not consumed by
               *  the child subtree), it checks the event against all internal
               *  transitions associated with that Event.  If the event is still
               *  not a nullptr (meaning the event was not consumed by the
               *  internal transitions), then it checks the event against all
               *  external transitions associated with that Event.
               *
               * @param[in] StateMachine::Event* Event needing to be handled
               *
               * @return true if event is consumed, false otherwise
               */
              bool                     handleEvent ( StateMachine::Event* event );
            };
            
            // Timer period
            static const double timerPeriod;
          
            // Constructors
            Set_Time  ( void ) : StateBase( ) {}
            Set_Time  ( StateBase* _parent ) : StateBase( _parent ) {}
            ~Set_Time ( void ) {}
          
            /**
             * @brief Calls entry() then handles any child
             *  initialization. Finally calls makeActive on the leaf.
             */
            void                     initialize ( void );
              
            /**
             * @brief Runs the entry() function defined in the model.
             */
            void                     entry ( void );
          
            /**
             * @brief Runs the exit() function defined in the model.
             */
            void                     exit ( void );
          
            /**
             * @brief Runs the tick() function defined in the model and then
             *  calls _activeState->tick().
             */
            void                     tick ( void );
          
            /**
             * @brief The timer period of the state in floating point seconds.
             *
             * @return  double  timer period
             */
            double                   getTimerPeriod ( void );
          
            /**
             * @brief Calls _activeState->handleEvent( event ), then if the
             *  event is not nullptr (meaning the event was not consumed by
             *  the child subtree), it checks the event against all internal
             *  transitions associated with that Event.  If the event is still
             *  not a nullptr (meaning the event was not consumed by the
             *  internal transitions), then it checks the event against all
             *  external transitions associated with that Event.
             *
             * @param[in] StateMachine::Event* Event needing to be handled
             *
             * @return true if event is consumed, false otherwise
             */
            bool                     handleEvent ( StateMachine::Event* event );
          };
          /**
           * @brief Declaration for PushTracker_HFSM::On::Settings::Time::Set_Date : /c/B/0/c/m/z
           *
           * States contain other states and can consume generic
           * StateMachine::Event objects if they have internal or external
           * transitions on those events and if those transitions' guards are
           * satisfied. Only one transition can consume an event in a given
           * state machine.
           *
           * There is also a different kind of Event, the tick event, which is
           * not consumed, but instead executes from the top-level state all
           * the way to the curently active leaf state.
           *
           * Entry and Exit actions also occur whenever a state is entered or
           * exited, respectively.
           */
          class Set_Date : public StateMachine::StateBase {
          public:
          
            /**
             * @brief Declaration for PushTracker_HFSM::On::Settings::Time::Set_Date::Month : /c/B/0/c/m/z/3
             *
             * States contain other states and can consume generic
             * StateMachine::Event objects if they have internal or external
             * transitions on those events and if those transitions' guards are
             * satisfied. Only one transition can consume an event in a given
             * state machine.
             *
             * There is also a different kind of Event, the tick event, which is
             * not consumed, but instead executes from the top-level state all
             * the way to the curently active leaf state.
             *
             * Entry and Exit actions also occur whenever a state is entered or
             * exited, respectively.
             */
            class Month : public StateMachine::StateBase {
            public:
            
              
              // Timer period
              static const double timerPeriod;
            
              // Constructors
              Month  ( void ) : StateBase( ) {}
              Month  ( StateBase* _parent ) : StateBase( _parent ) {}
              ~Month ( void ) {}
            
              /**
               * @brief Calls entry() then handles any child
               *  initialization. Finally calls makeActive on the leaf.
               */
              void                     initialize ( void );
                
              /**
               * @brief Runs the entry() function defined in the model.
               */
              void                     entry ( void );
            
              /**
               * @brief Runs the exit() function defined in the model.
               */
              void                     exit ( void );
            
              /**
               * @brief Runs the tick() function defined in the model and then
               *  calls _activeState->tick().
               */
              void                     tick ( void );
            
              /**
               * @brief The timer period of the state in floating point seconds.
               *
               * @return  double  timer period
               */
              double                   getTimerPeriod ( void );
            
              /**
               * @brief Calls _activeState->handleEvent( event ), then if the
               *  event is not nullptr (meaning the event was not consumed by
               *  the child subtree), it checks the event against all internal
               *  transitions associated with that Event.  If the event is still
               *  not a nullptr (meaning the event was not consumed by the
               *  internal transitions), then it checks the event against all
               *  external transitions associated with that Event.
               *
               * @param[in] StateMachine::Event* Event needing to be handled
               *
               * @return true if event is consumed, false otherwise
               */
              bool                     handleEvent ( StateMachine::Event* event );
            };
            /**
             * @brief Declaration for PushTracker_HFSM::On::Settings::Time::Set_Date::Years : /c/B/0/c/m/z/X
             *
             * States contain other states and can consume generic
             * StateMachine::Event objects if they have internal or external
             * transitions on those events and if those transitions' guards are
             * satisfied. Only one transition can consume an event in a given
             * state machine.
             *
             * There is also a different kind of Event, the tick event, which is
             * not consumed, but instead executes from the top-level state all
             * the way to the curently active leaf state.
             *
             * Entry and Exit actions also occur whenever a state is entered or
             * exited, respectively.
             */
            class Years : public StateMachine::StateBase {
            public:
            
              
              // Timer period
              static const double timerPeriod;
            
              // Constructors
              Years  ( void ) : StateBase( ) {}
              Years  ( StateBase* _parent ) : StateBase( _parent ) {}
              ~Years ( void ) {}
            
              /**
               * @brief Calls entry() then handles any child
               *  initialization. Finally calls makeActive on the leaf.
               */
              void                     initialize ( void );
                
              /**
               * @brief Runs the entry() function defined in the model.
               */
              void                     entry ( void );
            
              /**
               * @brief Runs the exit() function defined in the model.
               */
              void                     exit ( void );
            
              /**
               * @brief Runs the tick() function defined in the model and then
               *  calls _activeState->tick().
               */
              void                     tick ( void );
            
              /**
               * @brief The timer period of the state in floating point seconds.
               *
               * @return  double  timer period
               */
              double                   getTimerPeriod ( void );
            
              /**
               * @brief Calls _activeState->handleEvent( event ), then if the
               *  event is not nullptr (meaning the event was not consumed by
               *  the child subtree), it checks the event against all internal
               *  transitions associated with that Event.  If the event is still
               *  not a nullptr (meaning the event was not consumed by the
               *  internal transitions), then it checks the event against all
               *  external transitions associated with that Event.
               *
               * @param[in] StateMachine::Event* Event needing to be handled
               *
               * @return true if event is consumed, false otherwise
               */
              bool                     handleEvent ( StateMachine::Event* event );
            };
            /**
             * @brief Declaration for PushTracker_HFSM::On::Settings::Time::Set_Date::Day : /c/B/0/c/m/z/G
             *
             * States contain other states and can consume generic
             * StateMachine::Event objects if they have internal or external
             * transitions on those events and if those transitions' guards are
             * satisfied. Only one transition can consume an event in a given
             * state machine.
             *
             * There is also a different kind of Event, the tick event, which is
             * not consumed, but instead executes from the top-level state all
             * the way to the curently active leaf state.
             *
             * Entry and Exit actions also occur whenever a state is entered or
             * exited, respectively.
             */
            class Day : public StateMachine::StateBase {
            public:
            
              
              // Timer period
              static const double timerPeriod;
            
              // Constructors
              Day  ( void ) : StateBase( ) {}
              Day  ( StateBase* _parent ) : StateBase( _parent ) {}
              ~Day ( void ) {}
            
              /**
               * @brief Calls entry() then handles any child
               *  initialization. Finally calls makeActive on the leaf.
               */
              void                     initialize ( void );
                
              /**
               * @brief Runs the entry() function defined in the model.
               */
              void                     entry ( void );
            
              /**
               * @brief Runs the exit() function defined in the model.
               */
              void                     exit ( void );
            
              /**
               * @brief Runs the tick() function defined in the model and then
               *  calls _activeState->tick().
               */
              void                     tick ( void );
            
              /**
               * @brief The timer period of the state in floating point seconds.
               *
               * @return  double  timer period
               */
              double                   getTimerPeriod ( void );
            
              /**
               * @brief Calls _activeState->handleEvent( event ), then if the
               *  event is not nullptr (meaning the event was not consumed by
               *  the child subtree), it checks the event against all internal
               *  transitions associated with that Event.  If the event is still
               *  not a nullptr (meaning the event was not consumed by the
               *  internal transitions), then it checks the event against all
               *  external transitions associated with that Event.
               *
               * @param[in] StateMachine::Event* Event needing to be handled
               *
               * @return true if event is consumed, false otherwise
               */
              bool                     handleEvent ( StateMachine::Event* event );
            };
            /**
             * @brief Declaration for PushTracker_HFSM::On::Settings::Time::Set_Date::Ten_Years : /c/B/0/c/m/z/j
             *
             * States contain other states and can consume generic
             * StateMachine::Event objects if they have internal or external
             * transitions on those events and if those transitions' guards are
             * satisfied. Only one transition can consume an event in a given
             * state machine.
             *
             * There is also a different kind of Event, the tick event, which is
             * not consumed, but instead executes from the top-level state all
             * the way to the curently active leaf state.
             *
             * Entry and Exit actions also occur whenever a state is entered or
             * exited, respectively.
             */
            class Ten_Years : public StateMachine::StateBase {
            public:
            
              
              // Timer period
              static const double timerPeriod;
            
              // Constructors
              Ten_Years  ( void ) : StateBase( ) {}
              Ten_Years  ( StateBase* _parent ) : StateBase( _parent ) {}
              ~Ten_Years ( void ) {}
            
              /**
               * @brief Calls entry() then handles any child
               *  initialization. Finally calls makeActive on the leaf.
               */
              void                     initialize ( void );
                
              /**
               * @brief Runs the entry() function defined in the model.
               */
              void                     entry ( void );
            
              /**
               * @brief Runs the exit() function defined in the model.
               */
              void                     exit ( void );
            
              /**
               * @brief Runs the tick() function defined in the model and then
               *  calls _activeState->tick().
               */
              void                     tick ( void );
            
              /**
               * @brief The timer period of the state in floating point seconds.
               *
               * @return  double  timer period
               */
              double                   getTimerPeriod ( void );
            
              /**
               * @brief Calls _activeState->handleEvent( event ), then if the
               *  event is not nullptr (meaning the event was not consumed by
               *  the child subtree), it checks the event against all internal
               *  transitions associated with that Event.  If the event is still
               *  not a nullptr (meaning the event was not consumed by the
               *  internal transitions), then it checks the event against all
               *  external transitions associated with that Event.
               *
               * @param[in] StateMachine::Event* Event needing to be handled
               *
               * @return true if event is consumed, false otherwise
               */
              bool                     handleEvent ( StateMachine::Event* event );
            };
            
            // Timer period
            static const double timerPeriod;
          
            // Constructors
            Set_Date  ( void ) : StateBase( ) {}
            Set_Date  ( StateBase* _parent ) : StateBase( _parent ) {}
            ~Set_Date ( void ) {}
          
            /**
             * @brief Calls entry() then handles any child
             *  initialization. Finally calls makeActive on the leaf.
             */
            void                     initialize ( void );
              
            /**
             * @brief Runs the entry() function defined in the model.
             */
            void                     entry ( void );
          
            /**
             * @brief Runs the exit() function defined in the model.
             */
            void                     exit ( void );
          
            /**
             * @brief Runs the tick() function defined in the model and then
             *  calls _activeState->tick().
             */
            void                     tick ( void );
          
            /**
             * @brief The timer period of the state in floating point seconds.
             *
             * @return  double  timer period
             */
            double                   getTimerPeriod ( void );
          
            /**
             * @brief Calls _activeState->handleEvent( event ), then if the
             *  event is not nullptr (meaning the event was not consumed by
             *  the child subtree), it checks the event against all internal
             *  transitions associated with that Event.  If the event is still
             *  not a nullptr (meaning the event was not consumed by the
             *  internal transitions), then it checks the event against all
             *  external transitions associated with that Event.
             *
             * @param[in] StateMachine::Event* Event needing to be handled
             *
             * @return true if event is consumed, false otherwise
             */
            bool                     handleEvent ( StateMachine::Event* event );
          };
          /**
           * @brief Declaration for PushTracker_HFSM::On::Settings::Time::Icon : /c/B/0/c/m/s
           *
           * States contain other states and can consume generic
           * StateMachine::Event objects if they have internal or external
           * transitions on those events and if those transitions' guards are
           * satisfied. Only one transition can consume an event in a given
           * state machine.
           *
           * There is also a different kind of Event, the tick event, which is
           * not consumed, but instead executes from the top-level state all
           * the way to the curently active leaf state.
           *
           * Entry and Exit actions also occur whenever a state is entered or
           * exited, respectively.
           */
          class Icon : public StateMachine::StateBase {
          public:
          
            
            // Timer period
            static const double timerPeriod;
          
            // Constructors
            Icon  ( void ) : StateBase( ) {}
            Icon  ( StateBase* _parent ) : StateBase( _parent ) {}
            ~Icon ( void ) {}
          
            /**
             * @brief Calls entry() then handles any child
             *  initialization. Finally calls makeActive on the leaf.
             */
            void                     initialize ( void );
              
            /**
             * @brief Runs the entry() function defined in the model.
             */
            void                     entry ( void );
          
            /**
             * @brief Runs the exit() function defined in the model.
             */
            void                     exit ( void );
          
            /**
             * @brief Runs the tick() function defined in the model and then
             *  calls _activeState->tick().
             */
            void                     tick ( void );
          
            /**
             * @brief The timer period of the state in floating point seconds.
             *
             * @return  double  timer period
             */
            double                   getTimerPeriod ( void );
          
            /**
             * @brief Calls _activeState->handleEvent( event ), then if the
             *  event is not nullptr (meaning the event was not consumed by
             *  the child subtree), it checks the event against all internal
             *  transitions associated with that Event.  If the event is still
             *  not a nullptr (meaning the event was not consumed by the
             *  internal transitions), then it checks the event against all
             *  external transitions associated with that Event.
             *
             * @param[in] StateMachine::Event* Event needing to be handled
             *
             * @return true if event is consumed, false otherwise
             */
            bool                     handleEvent ( StateMachine::Event* event );
          };
          
          // Timer period
          static const double timerPeriod;
        
          // Constructors
          Time  ( void ) : StateBase( ) {}
          Time  ( StateBase* _parent ) : StateBase( _parent ) {}
          ~Time ( void ) {}
        
          /**
           * @brief Calls entry() then handles any child
           *  initialization. Finally calls makeActive on the leaf.
           */
          void                     initialize ( void );
            
          /**
           * @brief Runs the entry() function defined in the model.
           */
          void                     entry ( void );
        
          /**
           * @brief Runs the exit() function defined in the model.
           */
          void                     exit ( void );
        
          /**
           * @brief Runs the tick() function defined in the model and then
           *  calls _activeState->tick().
           */
          void                     tick ( void );
        
          /**
           * @brief The timer period of the state in floating point seconds.
           *
           * @return  double  timer period
           */
          double                   getTimerPeriod ( void );
        
          /**
           * @brief Calls _activeState->handleEvent( event ), then if the
           *  event is not nullptr (meaning the event was not consumed by
           *  the child subtree), it checks the event against all internal
           *  transitions associated with that Event.  If the event is still
           *  not a nullptr (meaning the event was not consumed by the
           *  internal transitions), then it checks the event against all
           *  external transitions associated with that Event.
           *
           * @param[in] StateMachine::Event* Event needing to be handled
           *
           * @return true if event is consumed, false otherwise
           */
          bool                     handleEvent ( StateMachine::Event* event );
        };
        /**
         * @brief Declaration for PushTracker_HFSM::On::Settings::About : /c/B/0/c/N
         *
         * States contain other states and can consume generic
         * StateMachine::Event objects if they have internal or external
         * transitions on those events and if those transitions' guards are
         * satisfied. Only one transition can consume an event in a given
         * state machine.
         *
         * There is also a different kind of Event, the tick event, which is
         * not consumed, but instead executes from the top-level state all
         * the way to the curently active leaf state.
         *
         * Entry and Exit actions also occur whenever a state is entered or
         * exited, respectively.
         */
        class About : public StateMachine::StateBase {
        public:
        
          /**
           * @brief Declaration for PushTracker_HFSM::On::Settings::About::Icon : /c/B/0/c/N/Q
           *
           * States contain other states and can consume generic
           * StateMachine::Event objects if they have internal or external
           * transitions on those events and if those transitions' guards are
           * satisfied. Only one transition can consume an event in a given
           * state machine.
           *
           * There is also a different kind of Event, the tick event, which is
           * not consumed, but instead executes from the top-level state all
           * the way to the curently active leaf state.
           *
           * Entry and Exit actions also occur whenever a state is entered or
           * exited, respectively.
           */
          class Icon : public StateMachine::StateBase {
          public:
          
            
            // Timer period
            static const double timerPeriod;
          
            // Constructors
            Icon  ( void ) : StateBase( ) {}
            Icon  ( StateBase* _parent ) : StateBase( _parent ) {}
            ~Icon ( void ) {}
          
            /**
             * @brief Calls entry() then handles any child
             *  initialization. Finally calls makeActive on the leaf.
             */
            void                     initialize ( void );
              
            /**
             * @brief Runs the entry() function defined in the model.
             */
            void                     entry ( void );
          
            /**
             * @brief Runs the exit() function defined in the model.
             */
            void                     exit ( void );
          
            /**
             * @brief Runs the tick() function defined in the model and then
             *  calls _activeState->tick().
             */
            void                     tick ( void );
          
            /**
             * @brief The timer period of the state in floating point seconds.
             *
             * @return  double  timer period
             */
            double                   getTimerPeriod ( void );
          
            /**
             * @brief Calls _activeState->handleEvent( event ), then if the
             *  event is not nullptr (meaning the event was not consumed by
             *  the child subtree), it checks the event against all internal
             *  transitions associated with that Event.  If the event is still
             *  not a nullptr (meaning the event was not consumed by the
             *  internal transitions), then it checks the event against all
             *  external transitions associated with that Event.
             *
             * @param[in] StateMachine::Event* Event needing to be handled
             *
             * @return true if event is consumed, false otherwise
             */
            bool                     handleEvent ( StateMachine::Event* event );
          };
          /**
           * @brief Declaration for PushTracker_HFSM::On::Settings::About::Versions : /c/B/0/c/N/o
           *
           * States contain other states and can consume generic
           * StateMachine::Event objects if they have internal or external
           * transitions on those events and if those transitions' guards are
           * satisfied. Only one transition can consume an event in a given
           * state machine.
           *
           * There is also a different kind of Event, the tick event, which is
           * not consumed, but instead executes from the top-level state all
           * the way to the curently active leaf state.
           *
           * Entry and Exit actions also occur whenever a state is entered or
           * exited, respectively.
           */
          class Versions : public StateMachine::StateBase {
          public:
          
            
            // Timer period
            static const double timerPeriod;
          
            // Constructors
            Versions  ( void ) : StateBase( ) {}
            Versions  ( StateBase* _parent ) : StateBase( _parent ) {}
            ~Versions ( void ) {}
          
            /**
             * @brief Calls entry() then handles any child
             *  initialization. Finally calls makeActive on the leaf.
             */
            void                     initialize ( void );
              
            /**
             * @brief Runs the entry() function defined in the model.
             */
            void                     entry ( void );
          
            /**
             * @brief Runs the exit() function defined in the model.
             */
            void                     exit ( void );
          
            /**
             * @brief Runs the tick() function defined in the model and then
             *  calls _activeState->tick().
             */
            void                     tick ( void );
          
            /**
             * @brief The timer period of the state in floating point seconds.
             *
             * @return  double  timer period
             */
            double                   getTimerPeriod ( void );
          
            /**
             * @brief Calls _activeState->handleEvent( event ), then if the
             *  event is not nullptr (meaning the event was not consumed by
             *  the child subtree), it checks the event against all internal
             *  transitions associated with that Event.  If the event is still
             *  not a nullptr (meaning the event was not consumed by the
             *  internal transitions), then it checks the event against all
             *  external transitions associated with that Event.
             *
             * @param[in] StateMachine::Event* Event needing to be handled
             *
             * @return true if event is consumed, false otherwise
             */
            bool                     handleEvent ( StateMachine::Event* event );
          };
          /**
           * @brief Declaration for PushTracker_HFSM::On::Settings::About::Error : /c/B/0/c/N/Z
           *
           * States contain other states and can consume generic
           * StateMachine::Event objects if they have internal or external
           * transitions on those events and if those transitions' guards are
           * satisfied. Only one transition can consume an event in a given
           * state machine.
           *
           * There is also a different kind of Event, the tick event, which is
           * not consumed, but instead executes from the top-level state all
           * the way to the curently active leaf state.
           *
           * Entry and Exit actions also occur whenever a state is entered or
           * exited, respectively.
           */
          class Error : public StateMachine::StateBase {
          public:
          
            
            // Timer period
            static const double timerPeriod;
          
            // Constructors
            Error  ( void ) : StateBase( ) {}
            Error  ( StateBase* _parent ) : StateBase( _parent ) {}
            ~Error ( void ) {}
          
            /**
             * @brief Calls entry() then handles any child
             *  initialization. Finally calls makeActive on the leaf.
             */
            void                     initialize ( void );
              
            /**
             * @brief Runs the entry() function defined in the model.
             */
            void                     entry ( void );
          
            /**
             * @brief Runs the exit() function defined in the model.
             */
            void                     exit ( void );
          
            /**
             * @brief Runs the tick() function defined in the model and then
             *  calls _activeState->tick().
             */
            void                     tick ( void );
          
            /**
             * @brief The timer period of the state in floating point seconds.
             *
             * @return  double  timer period
             */
            double                   getTimerPeriod ( void );
          
            /**
             * @brief Calls _activeState->handleEvent( event ), then if the
             *  event is not nullptr (meaning the event was not consumed by
             *  the child subtree), it checks the event against all internal
             *  transitions associated with that Event.  If the event is still
             *  not a nullptr (meaning the event was not consumed by the
             *  internal transitions), then it checks the event against all
             *  external transitions associated with that Event.
             *
             * @param[in] StateMachine::Event* Event needing to be handled
             *
             * @return true if event is consumed, false otherwise
             */
            bool                     handleEvent ( StateMachine::Event* event );
          };
          /**
           * @brief Declaration for PushTracker_HFSM::On::Settings::About::Error_Info : /c/B/0/c/N/c
           *
           * States contain other states and can consume generic
           * StateMachine::Event objects if they have internal or external
           * transitions on those events and if those transitions' guards are
           * satisfied. Only one transition can consume an event in a given
           * state machine.
           *
           * There is also a different kind of Event, the tick event, which is
           * not consumed, but instead executes from the top-level state all
           * the way to the curently active leaf state.
           *
           * Entry and Exit actions also occur whenever a state is entered or
           * exited, respectively.
           */
          class Error_Info : public StateMachine::StateBase {
          public:
          
            
            // Timer period
            static const double timerPeriod;
          
            // Constructors
            Error_Info  ( void ) : StateBase( ) {}
            Error_Info  ( StateBase* _parent ) : StateBase( _parent ) {}
            ~Error_Info ( void ) {}
          
            /**
             * @brief Calls entry() then handles any child
             *  initialization. Finally calls makeActive on the leaf.
             */
            void                     initialize ( void );
              
            /**
             * @brief Runs the entry() function defined in the model.
             */
            void                     entry ( void );
          
            /**
             * @brief Runs the exit() function defined in the model.
             */
            void                     exit ( void );
          
            /**
             * @brief Runs the tick() function defined in the model and then
             *  calls _activeState->tick().
             */
            void                     tick ( void );
          
            /**
             * @brief The timer period of the state in floating point seconds.
             *
             * @return  double  timer period
             */
            double                   getTimerPeriod ( void );
          
            /**
             * @brief Calls _activeState->handleEvent( event ), then if the
             *  event is not nullptr (meaning the event was not consumed by
             *  the child subtree), it checks the event against all internal
             *  transitions associated with that Event.  If the event is still
             *  not a nullptr (meaning the event was not consumed by the
             *  internal transitions), then it checks the event against all
             *  external transitions associated with that Event.
             *
             * @param[in] StateMachine::Event* Event needing to be handled
             *
             * @return true if event is consumed, false otherwise
             */
            bool                     handleEvent ( StateMachine::Event* event );
          };
          
          // Timer period
          static const double timerPeriod;
        
          // Constructors
          About  ( void ) : StateBase( ) {}
          About  ( StateBase* _parent ) : StateBase( _parent ) {}
          ~About ( void ) {}
        
          /**
           * @brief Calls entry() then handles any child
           *  initialization. Finally calls makeActive on the leaf.
           */
          void                     initialize ( void );
            
          /**
           * @brief Runs the entry() function defined in the model.
           */
          void                     entry ( void );
        
          /**
           * @brief Runs the exit() function defined in the model.
           */
          void                     exit ( void );
        
          /**
           * @brief Runs the tick() function defined in the model and then
           *  calls _activeState->tick().
           */
          void                     tick ( void );
        
          /**
           * @brief The timer period of the state in floating point seconds.
           *
           * @return  double  timer period
           */
          double                   getTimerPeriod ( void );
        
          /**
           * @brief Calls _activeState->handleEvent( event ), then if the
           *  event is not nullptr (meaning the event was not consumed by
           *  the child subtree), it checks the event against all internal
           *  transitions associated with that Event.  If the event is still
           *  not a nullptr (meaning the event was not consumed by the
           *  internal transitions), then it checks the event against all
           *  external transitions associated with that Event.
           *
           * @param[in] StateMachine::Event* Event needing to be handled
           *
           * @return true if event is consumed, false otherwise
           */
          bool                     handleEvent ( StateMachine::Event* event );
        };
        /**
         * @brief Declaration for PushTracker_HFSM::On::Settings::Units : /c/B/0/c/n
         *
         * States contain other states and can consume generic
         * StateMachine::Event objects if they have internal or external
         * transitions on those events and if those transitions' guards are
         * satisfied. Only one transition can consume an event in a given
         * state machine.
         *
         * There is also a different kind of Event, the tick event, which is
         * not consumed, but instead executes from the top-level state all
         * the way to the curently active leaf state.
         *
         * Entry and Exit actions also occur whenever a state is entered or
         * exited, respectively.
         */
        class Units : public StateMachine::StateBase {
        public:
        
          /**
           * @brief Declaration for PushTracker_HFSM::On::Settings::Units::Set_Units : /c/B/0/c/n/B
           *
           * States contain other states and can consume generic
           * StateMachine::Event objects if they have internal or external
           * transitions on those events and if those transitions' guards are
           * satisfied. Only one transition can consume an event in a given
           * state machine.
           *
           * There is also a different kind of Event, the tick event, which is
           * not consumed, but instead executes from the top-level state all
           * the way to the curently active leaf state.
           *
           * Entry and Exit actions also occur whenever a state is entered or
           * exited, respectively.
           */
          class Set_Units : public StateMachine::StateBase {
          public:
          
            
            // Timer period
            static const double timerPeriod;
          
            // Constructors
            Set_Units  ( void ) : StateBase( ) {}
            Set_Units  ( StateBase* _parent ) : StateBase( _parent ) {}
            ~Set_Units ( void ) {}
          
            /**
             * @brief Calls entry() then handles any child
             *  initialization. Finally calls makeActive on the leaf.
             */
            void                     initialize ( void );
              
            /**
             * @brief Runs the entry() function defined in the model.
             */
            void                     entry ( void );
          
            /**
             * @brief Runs the exit() function defined in the model.
             */
            void                     exit ( void );
          
            /**
             * @brief Runs the tick() function defined in the model and then
             *  calls _activeState->tick().
             */
            void                     tick ( void );
          
            /**
             * @brief The timer period of the state in floating point seconds.
             *
             * @return  double  timer period
             */
            double                   getTimerPeriod ( void );
          
            /**
             * @brief Calls _activeState->handleEvent( event ), then if the
             *  event is not nullptr (meaning the event was not consumed by
             *  the child subtree), it checks the event against all internal
             *  transitions associated with that Event.  If the event is still
             *  not a nullptr (meaning the event was not consumed by the
             *  internal transitions), then it checks the event against all
             *  external transitions associated with that Event.
             *
             * @param[in] StateMachine::Event* Event needing to be handled
             *
             * @return true if event is consumed, false otherwise
             */
            bool                     handleEvent ( StateMachine::Event* event );
          };
          /**
           * @brief Declaration for PushTracker_HFSM::On::Settings::Units::Icon : /c/B/0/c/n/e
           *
           * States contain other states and can consume generic
           * StateMachine::Event objects if they have internal or external
           * transitions on those events and if those transitions' guards are
           * satisfied. Only one transition can consume an event in a given
           * state machine.
           *
           * There is also a different kind of Event, the tick event, which is
           * not consumed, but instead executes from the top-level state all
           * the way to the curently active leaf state.
           *
           * Entry and Exit actions also occur whenever a state is entered or
           * exited, respectively.
           */
          class Icon : public StateMachine::StateBase {
          public:
          
            
            // Timer period
            static const double timerPeriod;
          
            // Constructors
            Icon  ( void ) : StateBase( ) {}
            Icon  ( StateBase* _parent ) : StateBase( _parent ) {}
            ~Icon ( void ) {}
          
            /**
             * @brief Calls entry() then handles any child
             *  initialization. Finally calls makeActive on the leaf.
             */
            void                     initialize ( void );
              
            /**
             * @brief Runs the entry() function defined in the model.
             */
            void                     entry ( void );
          
            /**
             * @brief Runs the exit() function defined in the model.
             */
            void                     exit ( void );
          
            /**
             * @brief Runs the tick() function defined in the model and then
             *  calls _activeState->tick().
             */
            void                     tick ( void );
          
            /**
             * @brief The timer period of the state in floating point seconds.
             *
             * @return  double  timer period
             */
            double                   getTimerPeriod ( void );
          
            /**
             * @brief Calls _activeState->handleEvent( event ), then if the
             *  event is not nullptr (meaning the event was not consumed by
             *  the child subtree), it checks the event against all internal
             *  transitions associated with that Event.  If the event is still
             *  not a nullptr (meaning the event was not consumed by the
             *  internal transitions), then it checks the event against all
             *  external transitions associated with that Event.
             *
             * @param[in] StateMachine::Event* Event needing to be handled
             *
             * @return true if event is consumed, false otherwise
             */
            bool                     handleEvent ( StateMachine::Event* event );
          };
          
          // Timer period
          static const double timerPeriod;
        
          // Constructors
          Units  ( void ) : StateBase( ) {}
          Units  ( StateBase* _parent ) : StateBase( _parent ) {}
          ~Units ( void ) {}
        
          /**
           * @brief Calls entry() then handles any child
           *  initialization. Finally calls makeActive on the leaf.
           */
          void                     initialize ( void );
            
          /**
           * @brief Runs the entry() function defined in the model.
           */
          void                     entry ( void );
        
          /**
           * @brief Runs the exit() function defined in the model.
           */
          void                     exit ( void );
        
          /**
           * @brief Runs the tick() function defined in the model and then
           *  calls _activeState->tick().
           */
          void                     tick ( void );
        
          /**
           * @brief The timer period of the state in floating point seconds.
           *
           * @return  double  timer period
           */
          double                   getTimerPeriod ( void );
        
          /**
           * @brief Calls _activeState->handleEvent( event ), then if the
           *  event is not nullptr (meaning the event was not consumed by
           *  the child subtree), it checks the event against all internal
           *  transitions associated with that Event.  If the event is still
           *  not a nullptr (meaning the event was not consumed by the
           *  internal transitions), then it checks the event against all
           *  external transitions associated with that Event.
           *
           * @param[in] StateMachine::Event* Event needing to be handled
           *
           * @return true if event is consumed, false otherwise
           */
          bool                     handleEvent ( StateMachine::Event* event );
        };
        
        // Timer period
        static const double timerPeriod;
      
        // Constructors
        Settings  ( void ) : StateBase( ) {}
        Settings  ( StateBase* _parent ) : StateBase( _parent ) {}
        ~Settings ( void ) {}
      
        /**
         * @brief Calls entry() then handles any child
         *  initialization. Finally calls makeActive on the leaf.
         */
        void                     initialize ( void );
          
        /**
         * @brief Runs the entry() function defined in the model.
         */
        void                     entry ( void );
      
        /**
         * @brief Runs the exit() function defined in the model.
         */
        void                     exit ( void );
      
        /**
         * @brief Runs the tick() function defined in the model and then
         *  calls _activeState->tick().
         */
        void                     tick ( void );
      
        /**
         * @brief The timer period of the state in floating point seconds.
         *
         * @return  double  timer period
         */
        double                   getTimerPeriod ( void );
      
        /**
         * @brief Calls _activeState->handleEvent( event ), then if the
         *  event is not nullptr (meaning the event was not consumed by
         *  the child subtree), it checks the event against all internal
         *  transitions associated with that Event.  If the event is still
         *  not a nullptr (meaning the event was not consumed by the
         *  internal transitions), then it checks the event against all
         *  external transitions associated with that Event.
         *
         * @param[in] StateMachine::Event* Event needing to be handled
         *
         * @return true if event is consumed, false otherwise
         */
        bool                     handleEvent ( StateMachine::Event* event );
      };
      /**
       * @brief Declaration for PushTracker_HFSM::On::Display_Info : /c/B/0/s
       *
       * States contain other states and can consume generic
       * StateMachine::Event objects if they have internal or external
       * transitions on those events and if those transitions' guards are
       * satisfied. Only one transition can consume an event in a given
       * state machine.
       *
       * There is also a different kind of Event, the tick event, which is
       * not consumed, but instead executes from the top-level state all
       * the way to the curently active leaf state.
       *
       * Entry and Exit actions also occur whenever a state is entered or
       * exited, respectively.
       */
      class Display_Info : public StateMachine::StateBase {
      public:
      
        /**
         * @brief Declaration for PushTracker_HFSM::On::Display_Info::Distance : /c/B/0/s/0
         *
         * States contain other states and can consume generic
         * StateMachine::Event objects if they have internal or external
         * transitions on those events and if those transitions' guards are
         * satisfied. Only one transition can consume an event in a given
         * state machine.
         *
         * There is also a different kind of Event, the tick event, which is
         * not consumed, but instead executes from the top-level state all
         * the way to the curently active leaf state.
         *
         * Entry and Exit actions also occur whenever a state is entered or
         * exited, respectively.
         */
        class Distance : public StateMachine::StateBase {
        public:
        
          /**
           * @brief Declaration for PushTracker_HFSM::On::Display_Info::Distance::Data : /c/B/0/s/0/l
           *
           * States contain other states and can consume generic
           * StateMachine::Event objects if they have internal or external
           * transitions on those events and if those transitions' guards are
           * satisfied. Only one transition can consume an event in a given
           * state machine.
           *
           * There is also a different kind of Event, the tick event, which is
           * not consumed, but instead executes from the top-level state all
           * the way to the curently active leaf state.
           *
           * Entry and Exit actions also occur whenever a state is entered or
           * exited, respectively.
           */
          class Data : public StateMachine::StateBase {
          public:
          
            
            // Timer period
            static const double timerPeriod;
          
            // Constructors
            Data  ( void ) : StateBase( ) {}
            Data  ( StateBase* _parent ) : StateBase( _parent ) {}
            ~Data ( void ) {}
          
            /**
             * @brief Calls entry() then handles any child
             *  initialization. Finally calls makeActive on the leaf.
             */
            void                     initialize ( void );
              
            /**
             * @brief Runs the entry() function defined in the model.
             */
            void                     entry ( void );
          
            /**
             * @brief Runs the exit() function defined in the model.
             */
            void                     exit ( void );
          
            /**
             * @brief Runs the tick() function defined in the model and then
             *  calls _activeState->tick().
             */
            void                     tick ( void );
          
            /**
             * @brief The timer period of the state in floating point seconds.
             *
             * @return  double  timer period
             */
            double                   getTimerPeriod ( void );
          
            /**
             * @brief Calls _activeState->handleEvent( event ), then if the
             *  event is not nullptr (meaning the event was not consumed by
             *  the child subtree), it checks the event against all internal
             *  transitions associated with that Event.  If the event is still
             *  not a nullptr (meaning the event was not consumed by the
             *  internal transitions), then it checks the event against all
             *  external transitions associated with that Event.
             *
             * @param[in] StateMachine::Event* Event needing to be handled
             *
             * @return true if event is consumed, false otherwise
             */
            bool                     handleEvent ( StateMachine::Event* event );
          };
          /**
           * @brief Declaration for PushTracker_HFSM::On::Display_Info::Distance::Icon : /c/B/0/s/0/Q
           *
           * States contain other states and can consume generic
           * StateMachine::Event objects if they have internal or external
           * transitions on those events and if those transitions' guards are
           * satisfied. Only one transition can consume an event in a given
           * state machine.
           *
           * There is also a different kind of Event, the tick event, which is
           * not consumed, but instead executes from the top-level state all
           * the way to the curently active leaf state.
           *
           * Entry and Exit actions also occur whenever a state is entered or
           * exited, respectively.
           */
          class Icon : public StateMachine::StateBase {
          public:
          
            
            // Timer period
            static const double timerPeriod;
          
            // Constructors
            Icon  ( void ) : StateBase( ) {}
            Icon  ( StateBase* _parent ) : StateBase( _parent ) {}
            ~Icon ( void ) {}
          
            /**
             * @brief Calls entry() then handles any child
             *  initialization. Finally calls makeActive on the leaf.
             */
            void                     initialize ( void );
              
            /**
             * @brief Runs the entry() function defined in the model.
             */
            void                     entry ( void );
          
            /**
             * @brief Runs the exit() function defined in the model.
             */
            void                     exit ( void );
          
            /**
             * @brief Runs the tick() function defined in the model and then
             *  calls _activeState->tick().
             */
            void                     tick ( void );
          
            /**
             * @brief The timer period of the state in floating point seconds.
             *
             * @return  double  timer period
             */
            double                   getTimerPeriod ( void );
          
            /**
             * @brief Calls _activeState->handleEvent( event ), then if the
             *  event is not nullptr (meaning the event was not consumed by
             *  the child subtree), it checks the event against all internal
             *  transitions associated with that Event.  If the event is still
             *  not a nullptr (meaning the event was not consumed by the
             *  internal transitions), then it checks the event against all
             *  external transitions associated with that Event.
             *
             * @param[in] StateMachine::Event* Event needing to be handled
             *
             * @return true if event is consumed, false otherwise
             */
            bool                     handleEvent ( StateMachine::Event* event );
          };
          
          // Timer period
          static const double timerPeriod;
        
          // Constructors
          Distance  ( void ) : StateBase( ) {}
          Distance  ( StateBase* _parent ) : StateBase( _parent ) {}
          ~Distance ( void ) {}
        
          /**
           * @brief Calls entry() then handles any child
           *  initialization. Finally calls makeActive on the leaf.
           */
          void                     initialize ( void );
            
          /**
           * @brief Runs the entry() function defined in the model.
           */
          void                     entry ( void );
        
          /**
           * @brief Runs the exit() function defined in the model.
           */
          void                     exit ( void );
        
          /**
           * @brief Runs the tick() function defined in the model and then
           *  calls _activeState->tick().
           */
          void                     tick ( void );
        
          /**
           * @brief The timer period of the state in floating point seconds.
           *
           * @return  double  timer period
           */
          double                   getTimerPeriod ( void );
        
          /**
           * @brief Calls _activeState->handleEvent( event ), then if the
           *  event is not nullptr (meaning the event was not consumed by
           *  the child subtree), it checks the event against all internal
           *  transitions associated with that Event.  If the event is still
           *  not a nullptr (meaning the event was not consumed by the
           *  internal transitions), then it checks the event against all
           *  external transitions associated with that Event.
           *
           * @param[in] StateMachine::Event* Event needing to be handled
           *
           * @return true if event is consumed, false otherwise
           */
          bool                     handleEvent ( StateMachine::Event* event );
        };
        /**
         * @brief Declaration for PushTracker_HFSM::On::Display_Info::Drive_Range : /c/B/0/s/i
         *
         * States contain other states and can consume generic
         * StateMachine::Event objects if they have internal or external
         * transitions on those events and if those transitions' guards are
         * satisfied. Only one transition can consume an event in a given
         * state machine.
         *
         * There is also a different kind of Event, the tick event, which is
         * not consumed, but instead executes from the top-level state all
         * the way to the curently active leaf state.
         *
         * Entry and Exit actions also occur whenever a state is entered or
         * exited, respectively.
         */
        class Drive_Range : public StateMachine::StateBase {
        public:
        
          
          // Timer period
          static const double timerPeriod;
        
          // Constructors
          Drive_Range  ( void ) : StateBase( ) {}
          Drive_Range  ( StateBase* _parent ) : StateBase( _parent ) {}
          ~Drive_Range ( void ) {}
        
          /**
           * @brief Calls entry() then handles any child
           *  initialization. Finally calls makeActive on the leaf.
           */
          void                     initialize ( void );
            
          /**
           * @brief Runs the entry() function defined in the model.
           */
          void                     entry ( void );
        
          /**
           * @brief Runs the exit() function defined in the model.
           */
          void                     exit ( void );
        
          /**
           * @brief Runs the tick() function defined in the model and then
           *  calls _activeState->tick().
           */
          void                     tick ( void );
        
          /**
           * @brief The timer period of the state in floating point seconds.
           *
           * @return  double  timer period
           */
          double                   getTimerPeriod ( void );
        
          /**
           * @brief Calls _activeState->handleEvent( event ), then if the
           *  event is not nullptr (meaning the event was not consumed by
           *  the child subtree), it checks the event against all internal
           *  transitions associated with that Event.  If the event is still
           *  not a nullptr (meaning the event was not consumed by the
           *  internal transitions), then it checks the event against all
           *  external transitions associated with that Event.
           *
           * @param[in] StateMachine::Event* Event needing to be handled
           *
           * @return true if event is consumed, false otherwise
           */
          bool                     handleEvent ( StateMachine::Event* event );
        };
        /**
         * @brief Declaration for PushTracker_HFSM::On::Display_Info::Time : /c/B/0/s/a
         *
         * States contain other states and can consume generic
         * StateMachine::Event objects if they have internal or external
         * transitions on those events and if those transitions' guards are
         * satisfied. Only one transition can consume an event in a given
         * state machine.
         *
         * There is also a different kind of Event, the tick event, which is
         * not consumed, but instead executes from the top-level state all
         * the way to the curently active leaf state.
         *
         * Entry and Exit actions also occur whenever a state is entered or
         * exited, respectively.
         */
        class Time : public StateMachine::StateBase {
        public:
        
          
          // Timer period
          static const double timerPeriod;
        
          // Constructors
          Time  ( void ) : StateBase( ) {}
          Time  ( StateBase* _parent ) : StateBase( _parent ) {}
          ~Time ( void ) {}
        
          /**
           * @brief Calls entry() then handles any child
           *  initialization. Finally calls makeActive on the leaf.
           */
          void                     initialize ( void );
            
          /**
           * @brief Runs the entry() function defined in the model.
           */
          void                     entry ( void );
        
          /**
           * @brief Runs the exit() function defined in the model.
           */
          void                     exit ( void );
        
          /**
           * @brief Runs the tick() function defined in the model and then
           *  calls _activeState->tick().
           */
          void                     tick ( void );
        
          /**
           * @brief The timer period of the state in floating point seconds.
           *
           * @return  double  timer period
           */
          double                   getTimerPeriod ( void );
        
          /**
           * @brief Calls _activeState->handleEvent( event ), then if the
           *  event is not nullptr (meaning the event was not consumed by
           *  the child subtree), it checks the event against all internal
           *  transitions associated with that Event.  If the event is still
           *  not a nullptr (meaning the event was not consumed by the
           *  internal transitions), then it checks the event against all
           *  external transitions associated with that Event.
           *
           * @param[in] StateMachine::Event* Event needing to be handled
           *
           * @return true if event is consumed, false otherwise
           */
          bool                     handleEvent ( StateMachine::Event* event );
        };
        /**
         * @brief Declaration for PushTracker_HFSM::On::Display_Info::Battery : /c/B/0/s/m
         *
         * States contain other states and can consume generic
         * StateMachine::Event objects if they have internal or external
         * transitions on those events and if those transitions' guards are
         * satisfied. Only one transition can consume an event in a given
         * state machine.
         *
         * There is also a different kind of Event, the tick event, which is
         * not consumed, but instead executes from the top-level state all
         * the way to the curently active leaf state.
         *
         * Entry and Exit actions also occur whenever a state is entered or
         * exited, respectively.
         */
        class Battery : public StateMachine::StateBase {
        public:
        
          
          // Timer period
          static const double timerPeriod;
        
          // Constructors
          Battery  ( void ) : StateBase( ) {}
          Battery  ( StateBase* _parent ) : StateBase( _parent ) {}
          ~Battery ( void ) {}
        
          /**
           * @brief Calls entry() then handles any child
           *  initialization. Finally calls makeActive on the leaf.
           */
          void                     initialize ( void );
            
          /**
           * @brief Runs the entry() function defined in the model.
           */
          void                     entry ( void );
        
          /**
           * @brief Runs the exit() function defined in the model.
           */
          void                     exit ( void );
        
          /**
           * @brief Runs the tick() function defined in the model and then
           *  calls _activeState->tick().
           */
          void                     tick ( void );
        
          /**
           * @brief The timer period of the state in floating point seconds.
           *
           * @return  double  timer period
           */
          double                   getTimerPeriod ( void );
        
          /**
           * @brief Calls _activeState->handleEvent( event ), then if the
           *  event is not nullptr (meaning the event was not consumed by
           *  the child subtree), it checks the event against all internal
           *  transitions associated with that Event.  If the event is still
           *  not a nullptr (meaning the event was not consumed by the
           *  internal transitions), then it checks the event against all
           *  external transitions associated with that Event.
           *
           * @param[in] StateMachine::Event* Event needing to be handled
           *
           * @return true if event is consumed, false otherwise
           */
          bool                     handleEvent ( StateMachine::Event* event );
        };
        /**
         * @brief Declaration for PushTracker_HFSM::On::Display_Info::Pushes : /c/B/0/s/M
         *
         * States contain other states and can consume generic
         * StateMachine::Event objects if they have internal or external
         * transitions on those events and if those transitions' guards are
         * satisfied. Only one transition can consume an event in a given
         * state machine.
         *
         * There is also a different kind of Event, the tick event, which is
         * not consumed, but instead executes from the top-level state all
         * the way to the curently active leaf state.
         *
         * Entry and Exit actions also occur whenever a state is entered or
         * exited, respectively.
         */
        class Pushes : public StateMachine::StateBase {
        public:
        
          /**
           * @brief Declaration for PushTracker_HFSM::On::Display_Info::Pushes::Data : /c/B/0/s/M/2
           *
           * States contain other states and can consume generic
           * StateMachine::Event objects if they have internal or external
           * transitions on those events and if those transitions' guards are
           * satisfied. Only one transition can consume an event in a given
           * state machine.
           *
           * There is also a different kind of Event, the tick event, which is
           * not consumed, but instead executes from the top-level state all
           * the way to the curently active leaf state.
           *
           * Entry and Exit actions also occur whenever a state is entered or
           * exited, respectively.
           */
          class Data : public StateMachine::StateBase {
          public:
          
            
            // Timer period
            static const double timerPeriod;
          
            // Constructors
            Data  ( void ) : StateBase( ) {}
            Data  ( StateBase* _parent ) : StateBase( _parent ) {}
            ~Data ( void ) {}
          
            /**
             * @brief Calls entry() then handles any child
             *  initialization. Finally calls makeActive on the leaf.
             */
            void                     initialize ( void );
              
            /**
             * @brief Runs the entry() function defined in the model.
             */
            void                     entry ( void );
          
            /**
             * @brief Runs the exit() function defined in the model.
             */
            void                     exit ( void );
          
            /**
             * @brief Runs the tick() function defined in the model and then
             *  calls _activeState->tick().
             */
            void                     tick ( void );
          
            /**
             * @brief The timer period of the state in floating point seconds.
             *
             * @return  double  timer period
             */
            double                   getTimerPeriod ( void );
          
            /**
             * @brief Calls _activeState->handleEvent( event ), then if the
             *  event is not nullptr (meaning the event was not consumed by
             *  the child subtree), it checks the event against all internal
             *  transitions associated with that Event.  If the event is still
             *  not a nullptr (meaning the event was not consumed by the
             *  internal transitions), then it checks the event against all
             *  external transitions associated with that Event.
             *
             * @param[in] StateMachine::Event* Event needing to be handled
             *
             * @return true if event is consumed, false otherwise
             */
            bool                     handleEvent ( StateMachine::Event* event );
          };
          /**
           * @brief Declaration for PushTracker_HFSM::On::Display_Info::Pushes::Icon : /c/B/0/s/M/B
           *
           * States contain other states and can consume generic
           * StateMachine::Event objects if they have internal or external
           * transitions on those events and if those transitions' guards are
           * satisfied. Only one transition can consume an event in a given
           * state machine.
           *
           * There is also a different kind of Event, the tick event, which is
           * not consumed, but instead executes from the top-level state all
           * the way to the curently active leaf state.
           *
           * Entry and Exit actions also occur whenever a state is entered or
           * exited, respectively.
           */
          class Icon : public StateMachine::StateBase {
          public:
          
            
            // Timer period
            static const double timerPeriod;
          
            // Constructors
            Icon  ( void ) : StateBase( ) {}
            Icon  ( StateBase* _parent ) : StateBase( _parent ) {}
            ~Icon ( void ) {}
          
            /**
             * @brief Calls entry() then handles any child
             *  initialization. Finally calls makeActive on the leaf.
             */
            void                     initialize ( void );
              
            /**
             * @brief Runs the entry() function defined in the model.
             */
            void                     entry ( void );
          
            /**
             * @brief Runs the exit() function defined in the model.
             */
            void                     exit ( void );
          
            /**
             * @brief Runs the tick() function defined in the model and then
             *  calls _activeState->tick().
             */
            void                     tick ( void );
          
            /**
             * @brief The timer period of the state in floating point seconds.
             *
             * @return  double  timer period
             */
            double                   getTimerPeriod ( void );
          
            /**
             * @brief Calls _activeState->handleEvent( event ), then if the
             *  event is not nullptr (meaning the event was not consumed by
             *  the child subtree), it checks the event against all internal
             *  transitions associated with that Event.  If the event is still
             *  not a nullptr (meaning the event was not consumed by the
             *  internal transitions), then it checks the event against all
             *  external transitions associated with that Event.
             *
             * @param[in] StateMachine::Event* Event needing to be handled
             *
             * @return true if event is consumed, false otherwise
             */
            bool                     handleEvent ( StateMachine::Event* event );
          };
          
          // Timer period
          static const double timerPeriod;
        
          // Constructors
          Pushes  ( void ) : StateBase( ) {}
          Pushes  ( StateBase* _parent ) : StateBase( _parent ) {}
          ~Pushes ( void ) {}
        
          /**
           * @brief Calls entry() then handles any child
           *  initialization. Finally calls makeActive on the leaf.
           */
          void                     initialize ( void );
            
          /**
           * @brief Runs the entry() function defined in the model.
           */
          void                     entry ( void );
        
          /**
           * @brief Runs the exit() function defined in the model.
           */
          void                     exit ( void );
        
          /**
           * @brief Runs the tick() function defined in the model and then
           *  calls _activeState->tick().
           */
          void                     tick ( void );
        
          /**
           * @brief The timer period of the state in floating point seconds.
           *
           * @return  double  timer period
           */
          double                   getTimerPeriod ( void );
        
          /**
           * @brief Calls _activeState->handleEvent( event ), then if the
           *  event is not nullptr (meaning the event was not consumed by
           *  the child subtree), it checks the event against all internal
           *  transitions associated with that Event.  If the event is still
           *  not a nullptr (meaning the event was not consumed by the
           *  internal transitions), then it checks the event against all
           *  external transitions associated with that Event.
           *
           * @param[in] StateMachine::Event* Event needing to be handled
           *
           * @return true if event is consumed, false otherwise
           */
          bool                     handleEvent ( StateMachine::Event* event );
        };
        /**
         * @brief Declaration for PushTracker_HFSM::On::Display_Info::Coast : /c/B/0/s/h
         *
         * States contain other states and can consume generic
         * StateMachine::Event objects if they have internal or external
         * transitions on those events and if those transitions' guards are
         * satisfied. Only one transition can consume an event in a given
         * state machine.
         *
         * There is also a different kind of Event, the tick event, which is
         * not consumed, but instead executes from the top-level state all
         * the way to the curently active leaf state.
         *
         * Entry and Exit actions also occur whenever a state is entered or
         * exited, respectively.
         */
        class Coast : public StateMachine::StateBase {
        public:
        
          /**
           * @brief Declaration for PushTracker_HFSM::On::Display_Info::Coast::Data : /c/B/0/s/h/T
           *
           * States contain other states and can consume generic
           * StateMachine::Event objects if they have internal or external
           * transitions on those events and if those transitions' guards are
           * satisfied. Only one transition can consume an event in a given
           * state machine.
           *
           * There is also a different kind of Event, the tick event, which is
           * not consumed, but instead executes from the top-level state all
           * the way to the curently active leaf state.
           *
           * Entry and Exit actions also occur whenever a state is entered or
           * exited, respectively.
           */
          class Data : public StateMachine::StateBase {
          public:
          
            
            // Timer period
            static const double timerPeriod;
          
            // Constructors
            Data  ( void ) : StateBase( ) {}
            Data  ( StateBase* _parent ) : StateBase( _parent ) {}
            ~Data ( void ) {}
          
            /**
             * @brief Calls entry() then handles any child
             *  initialization. Finally calls makeActive on the leaf.
             */
            void                     initialize ( void );
              
            /**
             * @brief Runs the entry() function defined in the model.
             */
            void                     entry ( void );
          
            /**
             * @brief Runs the exit() function defined in the model.
             */
            void                     exit ( void );
          
            /**
             * @brief Runs the tick() function defined in the model and then
             *  calls _activeState->tick().
             */
            void                     tick ( void );
          
            /**
             * @brief The timer period of the state in floating point seconds.
             *
             * @return  double  timer period
             */
            double                   getTimerPeriod ( void );
          
            /**
             * @brief Calls _activeState->handleEvent( event ), then if the
             *  event is not nullptr (meaning the event was not consumed by
             *  the child subtree), it checks the event against all internal
             *  transitions associated with that Event.  If the event is still
             *  not a nullptr (meaning the event was not consumed by the
             *  internal transitions), then it checks the event against all
             *  external transitions associated with that Event.
             *
             * @param[in] StateMachine::Event* Event needing to be handled
             *
             * @return true if event is consumed, false otherwise
             */
            bool                     handleEvent ( StateMachine::Event* event );
          };
          /**
           * @brief Declaration for PushTracker_HFSM::On::Display_Info::Coast::Icon : /c/B/0/s/h/g
           *
           * States contain other states and can consume generic
           * StateMachine::Event objects if they have internal or external
           * transitions on those events and if those transitions' guards are
           * satisfied. Only one transition can consume an event in a given
           * state machine.
           *
           * There is also a different kind of Event, the tick event, which is
           * not consumed, but instead executes from the top-level state all
           * the way to the curently active leaf state.
           *
           * Entry and Exit actions also occur whenever a state is entered or
           * exited, respectively.
           */
          class Icon : public StateMachine::StateBase {
          public:
          
            
            // Timer period
            static const double timerPeriod;
          
            // Constructors
            Icon  ( void ) : StateBase( ) {}
            Icon  ( StateBase* _parent ) : StateBase( _parent ) {}
            ~Icon ( void ) {}
          
            /**
             * @brief Calls entry() then handles any child
             *  initialization. Finally calls makeActive on the leaf.
             */
            void                     initialize ( void );
              
            /**
             * @brief Runs the entry() function defined in the model.
             */
            void                     entry ( void );
          
            /**
             * @brief Runs the exit() function defined in the model.
             */
            void                     exit ( void );
          
            /**
             * @brief Runs the tick() function defined in the model and then
             *  calls _activeState->tick().
             */
            void                     tick ( void );
          
            /**
             * @brief The timer period of the state in floating point seconds.
             *
             * @return  double  timer period
             */
            double                   getTimerPeriod ( void );
          
            /**
             * @brief Calls _activeState->handleEvent( event ), then if the
             *  event is not nullptr (meaning the event was not consumed by
             *  the child subtree), it checks the event against all internal
             *  transitions associated with that Event.  If the event is still
             *  not a nullptr (meaning the event was not consumed by the
             *  internal transitions), then it checks the event against all
             *  external transitions associated with that Event.
             *
             * @param[in] StateMachine::Event* Event needing to be handled
             *
             * @return true if event is consumed, false otherwise
             */
            bool                     handleEvent ( StateMachine::Event* event );
          };
          
          // Timer period
          static const double timerPeriod;
        
          // Constructors
          Coast  ( void ) : StateBase( ) {}
          Coast  ( StateBase* _parent ) : StateBase( _parent ) {}
          ~Coast ( void ) {}
        
          /**
           * @brief Calls entry() then handles any child
           *  initialization. Finally calls makeActive on the leaf.
           */
          void                     initialize ( void );
            
          /**
           * @brief Runs the entry() function defined in the model.
           */
          void                     entry ( void );
        
          /**
           * @brief Runs the exit() function defined in the model.
           */
          void                     exit ( void );
        
          /**
           * @brief Runs the tick() function defined in the model and then
           *  calls _activeState->tick().
           */
          void                     tick ( void );
        
          /**
           * @brief The timer period of the state in floating point seconds.
           *
           * @return  double  timer period
           */
          double                   getTimerPeriod ( void );
        
          /**
           * @brief Calls _activeState->handleEvent( event ), then if the
           *  event is not nullptr (meaning the event was not consumed by
           *  the child subtree), it checks the event against all internal
           *  transitions associated with that Event.  If the event is still
           *  not a nullptr (meaning the event was not consumed by the
           *  internal transitions), then it checks the event against all
           *  external transitions associated with that Event.
           *
           * @param[in] StateMachine::Event* Event needing to be handled
           *
           * @return true if event is consumed, false otherwise
           */
          bool                     handleEvent ( StateMachine::Event* event );
        };
        /**
         * @brief Declaration for PushTracker_HFSM::On::Display_Info::Low_Battery_Warning : /c/B/0/s/B
         *
         * States contain other states and can consume generic
         * StateMachine::Event objects if they have internal or external
         * transitions on those events and if those transitions' guards are
         * satisfied. Only one transition can consume an event in a given
         * state machine.
         *
         * There is also a different kind of Event, the tick event, which is
         * not consumed, but instead executes from the top-level state all
         * the way to the curently active leaf state.
         *
         * Entry and Exit actions also occur whenever a state is entered or
         * exited, respectively.
         */
        class Low_Battery_Warning : public StateMachine::StateBase {
        public:
        
          
          // Timer period
          static const double timerPeriod;
        
          // Constructors
          Low_Battery_Warning  ( void ) : StateBase( ) {}
          Low_Battery_Warning  ( StateBase* _parent ) : StateBase( _parent ) {}
          ~Low_Battery_Warning ( void ) {}
        
          /**
           * @brief Calls entry() then handles any child
           *  initialization. Finally calls makeActive on the leaf.
           */
          void                     initialize ( void );
            
          /**
           * @brief Runs the entry() function defined in the model.
           */
          void                     entry ( void );
        
          /**
           * @brief Runs the exit() function defined in the model.
           */
          void                     exit ( void );
        
          /**
           * @brief Runs the tick() function defined in the model and then
           *  calls _activeState->tick().
           */
          void                     tick ( void );
        
          /**
           * @brief The timer period of the state in floating point seconds.
           *
           * @return  double  timer period
           */
          double                   getTimerPeriod ( void );
        
          /**
           * @brief Calls _activeState->handleEvent( event ), then if the
           *  event is not nullptr (meaning the event was not consumed by
           *  the child subtree), it checks the event against all internal
           *  transitions associated with that Event.  If the event is still
           *  not a nullptr (meaning the event was not consumed by the
           *  internal transitions), then it checks the event against all
           *  external transitions associated with that Event.
           *
           * @param[in] StateMachine::Event* Event needing to be handled
           *
           * @return true if event is consumed, false otherwise
           */
          bool                     handleEvent ( StateMachine::Event* event );
        };
        
        // Timer period
        static const double timerPeriod;
      
        // Constructors
        Display_Info  ( void ) : StateBase( ) {}
        Display_Info  ( StateBase* _parent ) : StateBase( _parent ) {}
        ~Display_Info ( void ) {}
      
        /**
         * @brief Calls entry() then handles any child
         *  initialization. Finally calls makeActive on the leaf.
         */
        void                     initialize ( void );
          
        /**
         * @brief Runs the entry() function defined in the model.
         */
        void                     entry ( void );
      
        /**
         * @brief Runs the exit() function defined in the model.
         */
        void                     exit ( void );
      
        /**
         * @brief Runs the tick() function defined in the model and then
         *  calls _activeState->tick().
         */
        void                     tick ( void );
      
        /**
         * @brief The timer period of the state in floating point seconds.
         *
         * @return  double  timer period
         */
        double                   getTimerPeriod ( void );
      
        /**
         * @brief Calls _activeState->handleEvent( event ), then if the
         *  event is not nullptr (meaning the event was not consumed by
         *  the child subtree), it checks the event against all internal
         *  transitions associated with that Event.  If the event is still
         *  not a nullptr (meaning the event was not consumed by the
         *  internal transitions), then it checks the event against all
         *  external transitions associated with that Event.
         *
         * @param[in] StateMachine::Event* Event needing to be handled
         *
         * @return true if event is consumed, false otherwise
         */
        bool                     handleEvent ( StateMachine::Event* event );
      };
      /**
       * @brief Declaration for PushTracker_HFSM::On::Scan_for_App : /c/B/0/t
       *
       * States contain other states and can consume generic
       * StateMachine::Event objects if they have internal or external
       * transitions on those events and if those transitions' guards are
       * satisfied. Only one transition can consume an event in a given
       * state machine.
       *
       * There is also a different kind of Event, the tick event, which is
       * not consumed, but instead executes from the top-level state all
       * the way to the curently active leaf state.
       *
       * Entry and Exit actions also occur whenever a state is entered or
       * exited, respectively.
       */
      class Scan_for_App : public StateMachine::StateBase {
      public:
      
        
        // Timer period
        static const double timerPeriod;
      
        // Constructors
        Scan_for_App  ( void ) : StateBase( ) {}
        Scan_for_App  ( StateBase* _parent ) : StateBase( _parent ) {}
        ~Scan_for_App ( void ) {}
      
        /**
         * @brief Calls entry() then handles any child
         *  initialization. Finally calls makeActive on the leaf.
         */
        void                     initialize ( void );
          
        /**
         * @brief Runs the entry() function defined in the model.
         */
        void                     entry ( void );
      
        /**
         * @brief Runs the exit() function defined in the model.
         */
        void                     exit ( void );
      
        /**
         * @brief Runs the tick() function defined in the model and then
         *  calls _activeState->tick().
         */
        void                     tick ( void );
      
        /**
         * @brief The timer period of the state in floating point seconds.
         *
         * @return  double  timer period
         */
        double                   getTimerPeriod ( void );
      
        /**
         * @brief Calls _activeState->handleEvent( event ), then if the
         *  event is not nullptr (meaning the event was not consumed by
         *  the child subtree), it checks the event against all internal
         *  transitions associated with that Event.  If the event is still
         *  not a nullptr (meaning the event was not consumed by the
         *  internal transitions), then it checks the event against all
         *  external transitions associated with that Event.
         *
         * @param[in] StateMachine::Event* Event needing to be handled
         *
         * @return true if event is consumed, false otherwise
         */
        bool                     handleEvent ( StateMachine::Event* event );
      };
      /**
       * @brief Declaration for PushTracker_HFSM::On::Show_Speed : /c/B/0/g
       *
       * States contain other states and can consume generic
       * StateMachine::Event objects if they have internal or external
       * transitions on those events and if those transitions' guards are
       * satisfied. Only one transition can consume an event in a given
       * state machine.
       *
       * There is also a different kind of Event, the tick event, which is
       * not consumed, but instead executes from the top-level state all
       * the way to the curently active leaf state.
       *
       * Entry and Exit actions also occur whenever a state is entered or
       * exited, respectively.
       */
      class Show_Speed : public StateMachine::StateBase {
      public:
      
        
        // Timer period
        static const double timerPeriod;
      
        // Constructors
        Show_Speed  ( void ) : StateBase( ) {}
        Show_Speed  ( StateBase* _parent ) : StateBase( _parent ) {}
        ~Show_Speed ( void ) {}
      
        /**
         * @brief Calls entry() then handles any child
         *  initialization. Finally calls makeActive on the leaf.
         */
        void                     initialize ( void );
          
        /**
         * @brief Runs the entry() function defined in the model.
         */
        void                     entry ( void );
      
        /**
         * @brief Runs the exit() function defined in the model.
         */
        void                     exit ( void );
      
        /**
         * @brief Runs the tick() function defined in the model and then
         *  calls _activeState->tick().
         */
        void                     tick ( void );
      
        /**
         * @brief The timer period of the state in floating point seconds.
         *
         * @return  double  timer period
         */
        double                   getTimerPeriod ( void );
      
        /**
         * @brief Calls _activeState->handleEvent( event ), then if the
         *  event is not nullptr (meaning the event was not consumed by
         *  the child subtree), it checks the event against all internal
         *  transitions associated with that Event.  If the event is still
         *  not a nullptr (meaning the event was not consumed by the
         *  internal transitions), then it checks the event against all
         *  external transitions associated with that Event.
         *
         * @param[in] StateMachine::Event* Event needing to be handled
         *
         * @return true if event is consumed, false otherwise
         */
        bool                     handleEvent ( StateMachine::Event* event );
      };
      
      // Timer period
      static const double timerPeriod;
    
      // Constructors
      On  ( void ) : StateBase( ) {}
      On  ( StateBase* _parent ) : StateBase( _parent ) {}
      ~On ( void ) {}
    
      /**
       * @brief Calls entry() then handles any child
       *  initialization. Finally calls makeActive on the leaf.
       */
      void                     initialize ( void );
        
      /**
       * @brief Runs the entry() function defined in the model.
       */
      void                     entry ( void );
    
      /**
       * @brief Runs the exit() function defined in the model.
       */
      void                     exit ( void );
    
      /**
       * @brief Runs the tick() function defined in the model and then
       *  calls _activeState->tick().
       */
      void                     tick ( void );
    
      /**
       * @brief The timer period of the state in floating point seconds.
       *
       * @return  double  timer period
       */
      double                   getTimerPeriod ( void );
    
      /**
       * @brief Calls _activeState->handleEvent( event ), then if the
       *  event is not nullptr (meaning the event was not consumed by
       *  the child subtree), it checks the event against all internal
       *  transitions associated with that Event.  If the event is still
       *  not a nullptr (meaning the event was not consumed by the
       *  internal transitions), then it checks the event against all
       *  external transitions associated with that Event.
       *
       * @param[in] StateMachine::Event* Event needing to be handled
       *
       * @return true if event is consumed, false otherwise
       */
      bool                     handleEvent ( StateMachine::Event* event );
    };
    /**
     * @brief Declaration for PushTracker_HFSM::Sleep : /c/B/P
     *
     * States contain other states and can consume generic
     * StateMachine::Event objects if they have internal or external
     * transitions on those events and if those transitions' guards are
     * satisfied. Only one transition can consume an event in a given
     * state machine.
     *
     * There is also a different kind of Event, the tick event, which is
     * not consumed, but instead executes from the top-level state all
     * the way to the curently active leaf state.
     *
     * Entry and Exit actions also occur whenever a state is entered or
     * exited, respectively.
     */
    class Sleep : public StateMachine::StateBase {
    public:
    
      
      // Timer period
      static const double timerPeriod;
    
      // Constructors
      Sleep  ( void ) : StateBase( ) {}
      Sleep  ( StateBase* _parent ) : StateBase( _parent ) {}
      ~Sleep ( void ) {}
    
      /**
       * @brief Calls entry() then handles any child
       *  initialization. Finally calls makeActive on the leaf.
       */
      void                     initialize ( void );
        
      /**
       * @brief Runs the entry() function defined in the model.
       */
      void                     entry ( void );
    
      /**
       * @brief Runs the exit() function defined in the model.
       */
      void                     exit ( void );
    
      /**
       * @brief Runs the tick() function defined in the model and then
       *  calls _activeState->tick().
       */
      void                     tick ( void );
    
      /**
       * @brief The timer period of the state in floating point seconds.
       *
       * @return  double  timer period
       */
      double                   getTimerPeriod ( void );
    
      /**
       * @brief Calls _activeState->handleEvent( event ), then if the
       *  event is not nullptr (meaning the event was not consumed by
       *  the child subtree), it checks the event against all internal
       *  transitions associated with that Event.  If the event is still
       *  not a nullptr (meaning the event was not consumed by the
       *  internal transitions), then it checks the event against all
       *  external transitions associated with that Event.
       *
       * @param[in] StateMachine::Event* Event needing to be handled
       *
       * @return true if event is consumed, false otherwise
       */
      bool                     handleEvent ( StateMachine::Event* event );
    };

    // Constructors
    PushTracker_HFSM  ( void ) : StateBase( ) {}
    PushTracker_HFSM  ( StateBase* _parent ) : StateBase( _parent ) {}
    ~PushTracker_HFSM ( void ) {}
    
    /**
     * @brief Fully initializes the HFSM. Runs the HFSM Initialization
     *  code from the model, then sets the inital state and runs the
     *  initial transition and entry actions accordingly.
     */
    void                     initialize ( void );
    
    /**
     * @brief Terminates the HFSM, calling exit functions for the
     *  active leaf state upwards through its parents all the way to
     *  the root.
     */
    void                     terminate  ( void );

    /**
     * @brief Restarts the HFSM by calling terminate and then
     *  initialize.
     */
    void                     restart    ( void );

    /**
     * @brief Returns true if the HFSM has reached its END State
     */
    bool                     hasStopped ( void );

    /**
     * @brief Calls handleEvent on the activeLeaf.
     *
     * @param[in] StateMachine::Event* Event needing to be handled
     *
     * @return true if event is consumed, false otherwise
     */
    bool                     handleEvent ( StateMachine::Event* event );
  };
};

// pointers
extern StateMachine::PushTracker_HFSM *const PushTracker_HFSM_root;
extern StateMachine::PushTracker_HFSM *const PUSHTRACKER_HFSM_OBJ;
extern StateMachine::PushTracker_HFSM::On *const PUSHTRACKER_HFSM_OBJ__ON_OBJ;
extern StateMachine::PushTracker_HFSM::On::Power_Assist_Toggle *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__POWER_ASSIST_TOGGLE_OBJ;
extern StateMachine::PushTracker_HFSM::On::Display_Logo *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_LOGO_OBJ;
extern StateMachine::PushTracker_HFSM::On::Idle *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__IDLE_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::Pair_SmartDrive *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::Pair_SmartDrive::Pairing *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__PAIRING_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::Pair_SmartDrive::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_SMARTDRIVE_OBJ__ICON_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::Exit *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__EXIT_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::Pair_Phone *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::Pair_Phone::Pairing *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__PAIRING_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::Pair_Phone::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__PAIR_PHONE_OBJ__ICON_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ICON_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::SmartDrive *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ__ICON_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Tap_Sensitivity::Set_Tap_Sensitivity *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__TAP_SENSITIVITY_OBJ__SET_TAP_SENSITIVITY_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ICON_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Set_Max_Speed *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ__SET_MAX_SPEED_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Max_Speed::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__MAX_SPEED_OBJ__ICON_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Acceleration *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ__ICON_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Acceleration::Set_Acceleration *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__ACCELERATION_OBJ__SET_ACCELERATION_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_Control_Mode *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__SET_CONTROL_MODE_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Set_EZ_On *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__SET_EZ_ON_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Control_Mode::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__CONTROL_MODE_OBJ__ICON_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::SmartDrive::Exit *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__SMARTDRIVE_OBJ__EXIT_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::Time *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Time *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Time::Minutes *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__MINUTES_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Time::Ten_Minutes *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__TEN_MINUTES_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Time::Format *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__FORMAT_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Time::Hours *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_TIME_OBJ__HOURS_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Date *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Date::Month *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__MONTH_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Date::Years *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__YEARS_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Date::Day *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__DAY_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::Time::Set_Date::Ten_Years *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__SET_DATE_OBJ__TEN_YEARS_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::Time::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__TIME_OBJ__ICON_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::About *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::About::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ICON_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::About::Versions *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__VERSIONS_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::About::Error *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::About::Error_Info *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__ABOUT_OBJ__ERROR_INFO_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::Units *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::Units::Set_Units *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ__SET_UNITS_OBJ;
extern StateMachine::PushTracker_HFSM::On::Settings::Units::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SETTINGS_OBJ__UNITS_OBJ__ICON_OBJ;
extern StateMachine::PushTracker_HFSM::On::Display_Info *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ;
extern StateMachine::PushTracker_HFSM::On::Display_Info::Distance *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ;
extern StateMachine::PushTracker_HFSM::On::Display_Info::Distance::Data *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ__DATA_OBJ;
extern StateMachine::PushTracker_HFSM::On::Display_Info::Distance::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DISTANCE_OBJ__ICON_OBJ;
extern StateMachine::PushTracker_HFSM::On::Display_Info::Drive_Range *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__DRIVE_RANGE_OBJ;
extern StateMachine::PushTracker_HFSM::On::Display_Info::Time *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__TIME_OBJ;
extern StateMachine::PushTracker_HFSM::On::Display_Info::Battery *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__BATTERY_OBJ;
extern StateMachine::PushTracker_HFSM::On::Display_Info::Pushes *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ;
extern StateMachine::PushTracker_HFSM::On::Display_Info::Pushes::Data *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ__DATA_OBJ;
extern StateMachine::PushTracker_HFSM::On::Display_Info::Pushes::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__PUSHES_OBJ__ICON_OBJ;
extern StateMachine::PushTracker_HFSM::On::Display_Info::Coast *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ;
extern StateMachine::PushTracker_HFSM::On::Display_Info::Coast::Data *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ__DATA_OBJ;
extern StateMachine::PushTracker_HFSM::On::Display_Info::Coast::Icon *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__COAST_OBJ__ICON_OBJ;
extern StateMachine::PushTracker_HFSM::On::Display_Info::Low_Battery_Warning *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__DISPLAY_INFO_OBJ__LOW_BATTERY_WARNING_OBJ;
extern StateMachine::PushTracker_HFSM::On::Scan_for_App *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SCAN_FOR_APP_OBJ;
extern StateMachine::PushTracker_HFSM::On::Show_Speed *const PUSHTRACKER_HFSM_OBJ__ON_OBJ__SHOW_SPEED_OBJ;
extern StateMachine::PushTracker_HFSM::Sleep *const PUSHTRACKER_HFSM_OBJ__SLEEP_OBJ;

#endif // __GENERATED_STATES_INCLUDE_GUARD__
