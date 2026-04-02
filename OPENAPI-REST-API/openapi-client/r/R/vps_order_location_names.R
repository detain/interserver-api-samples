#' Create a new VpsOrderLocationNames
#'
#' @description
#' Location Names
#'
#' @docType class
#' @title VpsOrderLocationNames
#' @description VpsOrderLocationNames Class
#' @format An \code{R6Class} generator object
#' @field 3  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VpsOrderLocationNames <- R6::R6Class(
  "VpsOrderLocationNames",
  public = list(
    `3` = NULL,

    #' @description
    #' Initialize a new VpsOrderLocationNames class.
    #'
    #' @param 3 3
    #' @param ... Other optional arguments.
    initialize = function(`3` = NULL, ...) {
      if (!is.null(`3`)) {
        if (!(is.character(`3`) && length(`3`) == 1)) {
          stop(paste("Error! Invalid data for `3`. Must be a string:", `3`))
        }
        self$`3` <- `3`
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
    #' @return VpsOrderLocationNames as a base R list.
    #' @examples
    #' # convert array of VpsOrderLocationNames (x) to a data frame
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
    #' Convert VpsOrderLocationNames to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VpsOrderLocationNamesObject <- list()
      if (!is.null(self$`3`)) {
        VpsOrderLocationNamesObject[["3"]] <-
          self$`3`
      }
      return(VpsOrderLocationNamesObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsOrderLocationNames
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsOrderLocationNames
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`3`)) {
        self$`3` <- this_object$`3`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return VpsOrderLocationNames in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsOrderLocationNames
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsOrderLocationNames
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`3` <- this_object$`3`
      self
    },

    #' @description
    #' Validate JSON input with respect to VpsOrderLocationNames and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VpsOrderLocationNames
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      TRUE
    },

    #' @description
    #' Return a list of invalid fields (if any).
    #'
    #' @return A list of invalid fields (if any).
    getInvalidFields = function() {
      invalid_fields <- list()
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
# VpsOrderLocationNames$unlock()
#
## Below is an example to define the print function
# VpsOrderLocationNames$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VpsOrderLocationNames$lock()

