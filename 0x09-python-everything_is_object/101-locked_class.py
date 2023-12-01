#!/usr/bin/python3
"""Module about creating a locked Class"""


class LockedClass:
    """
    Class to be created and only assigned to an
    attribute called first_name no other attributes.
    """

    __slots__ = ["first_name"]
