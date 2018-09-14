/*******************************************************************\

Module: Various predicates over pointers in programs

Author: Daniel Kroening, kroening@kroening.com

\*******************************************************************/

/// \file
/// Various predicates over pointers in programs

#ifndef CPROVER_UTIL_POINTER_PREDICATES_H
#define CPROVER_UTIL_POINTER_PREDICATES_H

class exprt;
class namespacet;
class typet;

exprt same_object(const exprt &p1, const exprt &p2);
exprt deallocated(const exprt &pointer, const namespacet &);
exprt dead_object(const exprt &pointer, const namespacet &);
exprt pointer_offset(const exprt &pointer);
exprt pointer_object(const exprt &pointer);
exprt malloc_object(const exprt &pointer, const namespacet &);
exprt object_size(const exprt &pointer);
exprt dynamic_object(const exprt &pointer);
exprt null_object(const exprt &pointer);
exprt null_pointer(const exprt &pointer);
exprt integer_address(const exprt &pointer);
exprt invalid_pointer(const exprt &pointer);
exprt object_lower_bound(
  const exprt &pointer,
  const namespacet &,
  const exprt &offset);
exprt object_upper_bound(
  const exprt &pointer,
  const namespacet &,
  const exprt &access_size);

#endif // CPROVER_UTIL_POINTER_PREDICATES_H
