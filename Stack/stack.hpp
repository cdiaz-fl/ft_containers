#ifndef	STACK
# define	STACK

class	stack{
	private:
	
	public:
		stack();
		stack(stack const copy);
		~stack();
		stack &	operator=(stack const &rhs);
};
#endif

