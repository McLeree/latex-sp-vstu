# This is a base layout which is designed to be included from other standard layouts, like article and friends.

Format 11
Columns                 1
Sides                   1
SecNumDepth             5
TocDepth                5
DefaultStyle            Standard

# This is just to show how to declare the default font.
# The defaults are exactly those shown here.
DefaultFont
    Family                Roman
    Series                Medium
    Shape                 Up
    Size                  Normal
    Color                 None
EndFont

Style Standard
    Category              MainText
    Margin                Static
    LatexType             Paragraph
    LatexName             dummy
    ParIndent             MM
    ParSkip               0.4
    Align                 Block
    AlignPossible         Block, Left, Right, Center
    LabelType             No_Label
End

Input stdfloats.inc
Input stdinsets.inc
Input stdlayouts.inc
Input lyxmacros.inc
Input g2_105counters.inc
Input g2_105lists.inc
Input g2_105sections.inc
