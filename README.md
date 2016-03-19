===============
Contextual Hide
===============

This is a very simple module that allows you to hide contextual links on certain
elements, such as nodes, views or blocks.

This is useful in certain edge cases, where contextual links are overlapping,
causing workflow confusion or simply don't fit in your theme.

If you need to implement your dynamic rules (e.g. only in certain sections of
the site, certain content types, and so on), have a look at the source code. I
kept this module as minimal as possible, because anyone who will need something
more specific will be familiar with the hook_contextual_links_view_alter()
implementation.
