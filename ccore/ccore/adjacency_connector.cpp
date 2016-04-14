#include "adjacency_connector.h"


std::ostream & operator<<(std::ostream & p_stream, const connection_t & p_structure) {
	switch (p_structure) {
	case connection_t::CONNECTION_ALL_TO_ALL:
		p_stream << "all-to-all";
		break;

	case connection_t::CONNECTION_GRID_EIGHT:
		p_stream << "grid eight";
		break;

	case connection_t::CONNECTION_GRID_FOUR:
		p_stream << "grid four";
		break;

	case connection_t::CONNECTION_LIST_BIDIRECTIONAL:
		p_stream << "bidirectional list";
		break;

	case connection_t::CONNECTION_NONE:
		p_stream << "none structure";
		break;

	default:
		p_stream << "unknown structure";
		break;
	}
}