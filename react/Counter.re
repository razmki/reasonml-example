type state = {count: int};

/* the actions */
type action = 
  | Increment
  | Decrement;

let component = ReasonReact.reducerComponent("Counter");

let make = (_children) => { 
  ...component,
  /* the state */
  initialState: () => {count: 0},
   
  /* the reducer */
  reducer: (action, state) => 
    switch action {
    | Increment => ReasonReact.Update({count: state.count + 1})
    | Decrement => ReasonReact.Update({count: state.count - 1})
  },

  render: ({ state, send }) =>
    <div>
      <h1>{ReasonReact.string(string_of_int(state.count))}</h1>
      <button onClick=((_e) => send(Increment))> {ReasonReact.string("+")}</button>
      <button onClick=((_e) => send(Decrement))> {ReasonReact.string("-")}</button>
    </div>
};