# This include file contains all sectioning-related commands.

Format 11

Style "Раздел"
    Category              "Раздел"
    Margin                Dynamic
    LabelType             Counter
    LabelCounter          section
    TocLevel              0
    LatexType             Command
    LatexName             chapter
    NeedProtect           1
    NextNoIndent          0
    LabelSep              xxx
    ParSkip               0.4
    TopSep                1.3
    BottomSep             0.7
    ParSep                0.7
    Align                 Block
    AlignPossible         Block, Left
    OptionalArgs          1
    Font
      Series              Bold
      Size                Larger
    EndFont
End

Style Section*
    CopyStyle             "Раздел"
    Category              Unnumbered
    Margin                Static
    LatexName             ESKDstarsection
    LabelType             No_Label
    LabelCounter          ""
    OptionalArgs          0

    Preamble
        \newcommand{\ESKDstarsection}[1]{
            \addcontentsline{toc}{section}{#1}
            \section*{#1}
        }
    EndPreamble
End

Style "Подраздел"
    CopyStyle             "Раздел"
    LabelCounter          subsection
    TocLevel              1
    LatexName             section
    TopSep                0.9
    BottomSep             0.5
    ParSep                0.5
    Font
      Series              Bold
      Size                Large
    EndFont
End

Style "Пункт"
    Category              "Раздел"
    Margin                Dynamic
    LabelType             Counter
    LabelCounter          point
    KeepEmpty             1
    TocLevel              2
    LatexType             Command
    LatexName             subsection
#   LatexParam            1
    NeedProtect           0
    NextNoIndent          0
    LabelSep              xxx
    ParSkip               0.4
    TopSep                0.4
    BottomSep             0
    Font
      Series              Bold
    EndFont
    Align                 Block
    AlignPossible         Block, Left
End

Style "Подпункт"
    Category              "Раздел"
    Margin                Dynamic
    LabelType             Counter
    LabelCounter          subpoint
    KeepEmpty             1
    TocLevel              3
    LatexType             Command
    LatexName             subsubsection
#   LatexParam            1
    NeedProtect           0
    NextNoIndent          0
    LabelSep              xxx
    ParSkip               0.4
    TopSep                0.4
    BottomSep             0
    Font
      Series              Bold
    EndFont
    Align                 Block
    AlignPossible         Block, Left
End

Style "Приложение"
    Category              "Раздел"
    Margin                Dynamic
    LabelType             Static
    LabelCounter          appendix
    TocLevel              1
    LatexType             Command
    LatexName             appendix
    NeedProtect           1
    NextNoIndent          1
    LabelSep              xxx
    ParSkip               0.4
    TopSep                1.3
    BottomSep             0.7
    ParSep                0.7
    Align                 Block
    AlignPossible         Block, Left
    OptionalArgs          2
    Font
      Series              Bold
      Size                Larger
    EndFont
End

Style Abstract
    CopyStyle             "Раздел"
    Category              FrontMatter
    Margin                Static
    LatexName             chapter*
    LabelType             No_Label
    LabelCounter          ""
    OptionalArgs          0
End

Style Bibliography
    Margin                First_Dynamic
    LatexType             Bib_Environment
    LatexName             thebibliography
    Category              BackMatter
    NextNoIndent          1
    LeftMargin            MM
    ParSkip               0.4
    ItemSep               0
    TopSep                0.7
    BottomSep             0.7
    ParSep                0.5
    Align                 Block
    AlignPossible         Block, Left
    LabelType             Bibliography
    LabelString           "Список использованных источников"
    LabelBottomSep        1.2
    LabelFont
      Series              Bold
      Size                Larger
    EndFont
End

Input numarticle.inc
