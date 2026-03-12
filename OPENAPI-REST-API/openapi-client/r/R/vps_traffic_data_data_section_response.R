#' Create a new VPSTrafficDataDataSectionResponse
#'
#' @description
#' VPS Traffic Data section Data subsection Row Response
#'
#' @docType class
#' @title VPSTrafficDataDataSectionResponse
#' @description VPSTrafficDataDataSectionResponse Class
#' @format An \code{R6Class} generator object
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VPSTrafficDataDataSectionResponse <- R6::R6Class(
  "VPSTrafficDataDataSectionResponse",
  inherit = null<VPSTrafficDataDataSectionResponse_inner>,
  public = list(

    #' @description
    #' Initialize a new VPSTrafficDataDataSectionResponse class.
    #'
    #' @param ... Other optional arguments.
    initialize = function(...) {
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
    #' @return VPSTrafficDataDataSectionResponse as a base R list.
    #' @examples
    #' # convert array of VPSTrafficDataDataSectionResponse (x) to a data frame
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
    #' Convert VPSTrafficDataDataSectionResponse to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VPSTrafficDataDataSectionResponseObject <- list()
      return(VPSTrafficDataDataSectionResponseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of VPSTrafficDataDataSectionResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of VPSTrafficDataDataSectionResponse
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return VPSTrafficDataDataSectionResponse in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VPSTrafficDataDataSectionResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of VPSTrafficDataDataSectionResponse
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self
    },

    #' @description
    #' Validate JSON input with respect to VPSTrafficDataDataSectionResponse and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VPSTrafficDataDataSectionResponse
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
# VPSTrafficDataDataSectionResponse$unlock()
#
## Below is an example to define the print function
# VPSTrafficDataDataSectionResponse$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VPSTrafficDataDataSectionResponse$lock()

