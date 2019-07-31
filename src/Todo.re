[@react.component]
let make = (~todo: StateTypes.todo) => {
	let ( _, dispatch ) = React.useContext(Provider.context);

	<li>
		<div className="view">
			<input className="toggle" type_="checkbox"
				id={ "completeTodo" ++ todo.id }
				onChange={
					_ => dispatch(( CompleteTodo: StateTypes.action, "", todo.id ));
				}
				checked={ todo.completed } />
			<label htmlFor={ "completeTodo" ++ todo.id }>
				todo.title -> React.string
			</label>
			<button className="destroy" onClick={
				(_) => dispatch(( DeleteTodo: StateTypes.action, "", todo.id));
				}>
				<span style={ ReactDOMRe.Style.make(~position="fixed", ~top="-2em", ()) }>
					"Delete" -> React.string
				</span>
			</button>
		</div>
	</li>
};
