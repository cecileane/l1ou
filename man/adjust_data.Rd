% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/tools.R
\name{adjust_data}
\alias{adjust_data}
\title{Adjusts the tree and traits to meet the requirements of \code{estimate_shift_configuration}}
\usage{
adjust_data(tree, Y, normalize = TRUE, quietly = FALSE)
}
\arguments{
\item{tree}{ultrametric tree of class phylo with branch lengths.}

\item{Y}{trait vector/matrix without missing entries.}

\item{normalize}{logical. If TRUE, normalizes branch lengths to a unit tree height.}

\item{quietly}{logical. If FALSE, changes in tree/trait are printed.}
}
\value{
\item{tree}{tree of class phylo, with the same topology as the input \code{tree} but adjusted edge order.}
\item{Y}{trait vector/matrix with adjusted row names and row order.}
}
\description{
Returns a new tree and new data matrix, where the tree edges are in postorder, and the data row names match the order of the tree tip labels.
}
\examples{
data(lizard.tree, lizard.traits)
# here, lizard.traits is a matrix, so columns retain row names:
names(lizard.traits[,1])
lizard <- adjust_data(lizard.tree, lizard.traits[,1])

# for a data frame, make sure to retain row names if a single column is selected:
lizard.traits <- as.data.frame(lizard.traits)
lizard <- adjust_data(lizard.tree, subset(lizard.traits, select=1))
}

