#' Create a new WebsitesOrderPackges
#'
#' @description
#' The packages data.
#'
#' @docType class
#' @title WebsitesOrderPackges
#' @description WebsitesOrderPackges Class
#' @format An \code{R6Class} generator object
#' @field 11440  \link{WebsitesOrderPackagesInfo}
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
WebsitesOrderPackges <- R6::R6Class(
  "WebsitesOrderPackges",
  public = list(
    `11440` = NULL,

    #' @description
    #' Initialize a new WebsitesOrderPackges class.
    #'
    #' @param 11440 11440
    #' @param ... Other optional arguments.
    initialize = function(`11440`, ...) {
      if (!missing(`11440`)) {
        stopifnot(R6::is.R6(`11440`))
        self$`11440` <- `11440`
      }
    },

    #' @description
    #' Convert to an R object. This method is deprecated. Use `toSimpleType()` instead.
    toJSON = function() {
      .Deprecated(new = "toSimpleType", msg = "Use the '$toSimpleType()' method instead since that is more clearly named. Use '$toJSONString()' to get a JSON string")
      return(self$toSimpleType())
    },

    #' @description
    #' Convert to a List
    #'
    #' Convert the R6 object to a list to work more easily with other tooling.
    #'
    #' @return WebsitesOrderPackges as a base R list.
    #' @examples
    #' # convert array of WebsitesOrderPackges (x) to a data frame
    #' \dontrun{
    #' library(purrr)
    #' library(tibble)
    #' df <- x |> map(\(y)y$toList()) |> map(as_tibble) |> list_rbind()
    #' df
    #' }
    toList = function() {
      return(self$toSimpleType())
    },

    #' @description
    #' Convert WebsitesOrderPackges to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      WebsitesOrderPackgesObject <- list()
      if (!is.null(self$`11440`)) {
        WebsitesOrderPackgesObject[["11440"]] <-
          self$extractSimpleType(self$`11440`)
      }
      return(WebsitesOrderPackgesObject)
    },

    extractSimpleType = function(x) {
      if (R6::is.R6(x)) {
        return(x$toSimpleType())
      } else if (!self$hasNestedR6(x)) {
        return(x)
      }
      lapply(x, self$extractSimpleType)
    },

    hasNestedR6 = function(x) {
      if (R6::is.R6(x)) {
        return(TRUE)
      }
      if (is.list(x)) {
        for (item in x) {
          if (self$hasNestedR6(item)) {
            return(TRUE)
          }
        }
      }
      FALSE
    },

    #' @description
    #' Deserialize JSON string into an instance of WebsitesOrderPackges
    #'
    #' @param input_json the JSON input
    #' @return the instance of WebsitesOrderPackges
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`11440`)) {
        `11440_object` <- WebsitesOrderPackagesInfo$new()
        `11440_object`$fromJSON(jsonlite::toJSON(this_object$`11440`, auto_unbox = TRUE, digits = NA))
        self$`11440` <- `11440_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return WebsitesOrderPackges in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of WebsitesOrderPackges
    #'
    #' @param input_json the JSON input
    #' @return the instance of WebsitesOrderPackges
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`11440` <- WebsitesOrderPackagesInfo$new()$fromJSON(jsonlite::toJSON(this_object$`11440`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to WebsitesOrderPackges and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `11440`
      if (!is.null(input_json$`11440`)) {
        stopifnot(R6::is.R6(input_json$`11440`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for WebsitesOrderPackges: the required field `11440` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of WebsitesOrderPackges
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `11440` is null
      if (is.null(self$`11440`)) {
        return(FALSE)
      }

      TRUE
    },

    #' @description
    #' Return a list of invalid fields (if any).
    #'
    #' @return A list of invalid fields (if any).
    getInvalidFields = function() {
      invalid_fields <- list()
      # check if the required `11440` is null
      if (is.null(self$`11440`)) {
        invalid_fields["11440"] <- "Non-nullable required field `11440` cannot be null."
      }

      invalid_fields
    },

    #' @description
    #' Print the object
    print = function() {
      print(jsonlite::prettify(self$toJSONString()))
      invisible(self)
    }
  ),
  # Lock the class to prevent modifications to the method or field
  lock_class = TRUE
)
## Uncomment below to unlock the class to allow modifications of the method or field
# WebsitesOrderPackges$unlock()
#
## Below is an example to define the print function
# WebsitesOrderPackges$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# WebsitesOrderPackges$lock()

