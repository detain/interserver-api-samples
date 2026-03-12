#' Create a new VpsTrafficHistorySectionDataResponse
#'
#' @description
#' VPS Traffic Hisotrty Data Row of Hour/Day Section
#'
#' @docType class
#' @title VpsTrafficHistorySectionDataResponse
#' @description VpsTrafficHistorySectionDataResponse Class
#' @format An \code{R6Class} generator object
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VpsTrafficHistorySectionDataResponse <- R6::R6Class(
  "VpsTrafficHistorySectionDataResponse",
  inherit = null<VPSTrafficDataDataSectionResponse_inner>,
  public = list(

    #' @description
    #' Initialize a new VpsTrafficHistorySectionDataResponse class.
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
    #' @return VpsTrafficHistorySectionDataResponse as a base R list.
    #' @examples
    #' # convert array of VpsTrafficHistorySectionDataResponse (x) to a data frame
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
    #' Convert VpsTrafficHistorySectionDataResponse to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VpsTrafficHistorySectionDataResponseObject <- list()
      return(VpsTrafficHistorySectionDataResponseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsTrafficHistorySectionDataResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsTrafficHistorySectionDataResponse
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return VpsTrafficHistorySectionDataResponse in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsTrafficHistorySectionDataResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsTrafficHistorySectionDataResponse
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self
    },

    #' @description
    #' Validate JSON input with respect to VpsTrafficHistorySectionDataResponse and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VpsTrafficHistorySectionDataResponse
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
# VpsTrafficHistorySectionDataResponse$unlock()
#
## Below is an example to define the print function
# VpsTrafficHistorySectionDataResponse$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VpsTrafficHistorySectionDataResponse$lock()

