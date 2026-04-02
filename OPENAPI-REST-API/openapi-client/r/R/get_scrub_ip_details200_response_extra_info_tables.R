#' Create a new GetScrubIpDetails200ResponseExtraInfoTables
#'
#' @description
#' GetScrubIpDetails200ResponseExtraInfoTables Class
#'
#' @docType class
#' @title GetScrubIpDetails200ResponseExtraInfoTables
#' @description GetScrubIpDetails200ResponseExtraInfoTables Class
#' @format An \code{R6Class} generator object
#' @field scrub_ips  \link{GetScrubIpDetails200ResponseExtraInfoTablesScrubIps} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
GetScrubIpDetails200ResponseExtraInfoTables <- R6::R6Class(
  "GetScrubIpDetails200ResponseExtraInfoTables",
  public = list(
    `scrub_ips` = NULL,

    #' @description
    #' Initialize a new GetScrubIpDetails200ResponseExtraInfoTables class.
    #'
    #' @param scrub_ips scrub_ips
    #' @param ... Other optional arguments.
    initialize = function(`scrub_ips` = NULL, ...) {
      if (!is.null(`scrub_ips`)) {
        stopifnot(R6::is.R6(`scrub_ips`))
        self$`scrub_ips` <- `scrub_ips`
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
    #' @return GetScrubIpDetails200ResponseExtraInfoTables as a base R list.
    #' @examples
    #' # convert array of GetScrubIpDetails200ResponseExtraInfoTables (x) to a data frame
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
    #' Convert GetScrubIpDetails200ResponseExtraInfoTables to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      GetScrubIpDetails200ResponseExtraInfoTablesObject <- list()
      if (!is.null(self$`scrub_ips`)) {
        GetScrubIpDetails200ResponseExtraInfoTablesObject[["scrub_ips"]] <-
          self$extractSimpleType(self$`scrub_ips`)
      }
      return(GetScrubIpDetails200ResponseExtraInfoTablesObject)
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
    #' Deserialize JSON string into an instance of GetScrubIpDetails200ResponseExtraInfoTables
    #'
    #' @param input_json the JSON input
    #' @return the instance of GetScrubIpDetails200ResponseExtraInfoTables
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`scrub_ips`)) {
        `scrub_ips_object` <- GetScrubIpDetails200ResponseExtraInfoTablesScrubIps$new()
        `scrub_ips_object`$fromJSON(jsonlite::toJSON(this_object$`scrub_ips`, auto_unbox = TRUE, digits = NA))
        self$`scrub_ips` <- `scrub_ips_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return GetScrubIpDetails200ResponseExtraInfoTables in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of GetScrubIpDetails200ResponseExtraInfoTables
    #'
    #' @param input_json the JSON input
    #' @return the instance of GetScrubIpDetails200ResponseExtraInfoTables
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`scrub_ips` <- GetScrubIpDetails200ResponseExtraInfoTablesScrubIps$new()$fromJSON(jsonlite::toJSON(this_object$`scrub_ips`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to GetScrubIpDetails200ResponseExtraInfoTables and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of GetScrubIpDetails200ResponseExtraInfoTables
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
# GetScrubIpDetails200ResponseExtraInfoTables$unlock()
#
## Below is an example to define the print function
# GetScrubIpDetails200ResponseExtraInfoTables$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# GetScrubIpDetails200ResponseExtraInfoTables$lock()

