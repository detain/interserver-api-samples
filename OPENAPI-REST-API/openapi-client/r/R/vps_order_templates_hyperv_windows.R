#' Create a new VpsOrderTemplatesHypervWindows
#'
#' @description
#' VpsOrderTemplatesHypervWindows Class
#'
#' @docType class
#' @title VpsOrderTemplatesHypervWindows
#' @description VpsOrderTemplatesHypervWindows Class
#' @format An \code{R6Class} generator object
#' @field Windows2019Standard  character [optional]
#' @field Windows2022  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VpsOrderTemplatesHypervWindows <- R6::R6Class(
  "VpsOrderTemplatesHypervWindows",
  public = list(
    `Windows2019Standard` = NULL,
    `Windows2022` = NULL,

    #' @description
    #' Initialize a new VpsOrderTemplatesHypervWindows class.
    #'
    #' @param Windows2019Standard Windows2019Standard
    #' @param Windows2022 Windows2022
    #' @param ... Other optional arguments.
    initialize = function(`Windows2019Standard` = NULL, `Windows2022` = NULL, ...) {
      if (!is.null(`Windows2019Standard`)) {
        if (!(is.character(`Windows2019Standard`) && length(`Windows2019Standard`) == 1)) {
          stop(paste("Error! Invalid data for `Windows2019Standard`. Must be a string:", `Windows2019Standard`))
        }
        self$`Windows2019Standard` <- `Windows2019Standard`
      }
      if (!is.null(`Windows2022`)) {
        if (!(is.character(`Windows2022`) && length(`Windows2022`) == 1)) {
          stop(paste("Error! Invalid data for `Windows2022`. Must be a string:", `Windows2022`))
        }
        self$`Windows2022` <- `Windows2022`
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
    #' @return VpsOrderTemplatesHypervWindows as a base R list.
    #' @examples
    #' # convert array of VpsOrderTemplatesHypervWindows (x) to a data frame
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
    #' Convert VpsOrderTemplatesHypervWindows to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VpsOrderTemplatesHypervWindowsObject <- list()
      if (!is.null(self$`Windows2019Standard`)) {
        VpsOrderTemplatesHypervWindowsObject[["Windows2019Standard"]] <-
          self$`Windows2019Standard`
      }
      if (!is.null(self$`Windows2022`)) {
        VpsOrderTemplatesHypervWindowsObject[["Windows2022"]] <-
          self$`Windows2022`
      }
      return(VpsOrderTemplatesHypervWindowsObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsOrderTemplatesHypervWindows
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsOrderTemplatesHypervWindows
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`Windows2019Standard`)) {
        self$`Windows2019Standard` <- this_object$`Windows2019Standard`
      }
      if (!is.null(this_object$`Windows2022`)) {
        self$`Windows2022` <- this_object$`Windows2022`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return VpsOrderTemplatesHypervWindows in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsOrderTemplatesHypervWindows
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsOrderTemplatesHypervWindows
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`Windows2019Standard` <- this_object$`Windows2019Standard`
      self$`Windows2022` <- this_object$`Windows2022`
      self
    },

    #' @description
    #' Validate JSON input with respect to VpsOrderTemplatesHypervWindows and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VpsOrderTemplatesHypervWindows
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
# VpsOrderTemplatesHypervWindows$unlock()
#
## Below is an example to define the print function
# VpsOrderTemplatesHypervWindows$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VpsOrderTemplatesHypervWindows$lock()

