#' Create a new DomainOrderTldServices
#'
#' @description
#' Example map of TLDs to service IDs for domain ordering.
#'
#' @docType class
#' @title DomainOrderTldServices
#' @description DomainOrderTldServices Class
#' @format An \code{R6Class} generator object
#' @field .asia Service ID for .asia TLD integer [optional]
#' @field .be Service ID for .be TLD integer [optional]
#' @field .biz Service ID for .biz TLD integer [optional]
#' @field .ca Service ID for .ca TLD integer [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DomainOrderTldServices <- R6::R6Class(
  "DomainOrderTldServices",
  public = list(
    `.asia` = NULL,
    `.be` = NULL,
    `.biz` = NULL,
    `.ca` = NULL,

    #' @description
    #' Initialize a new DomainOrderTldServices class.
    #'
    #' @param .asia Service ID for .asia TLD
    #' @param .be Service ID for .be TLD
    #' @param .biz Service ID for .biz TLD
    #' @param .ca Service ID for .ca TLD
    #' @param ... Other optional arguments.
    initialize = function(`.asia` = NULL, `.be` = NULL, `.biz` = NULL, `.ca` = NULL, ...) {
      if (!is.null(`.asia`)) {
        if (!(is.numeric(`.asia`) && length(`.asia`) == 1)) {
          stop(paste("Error! Invalid data for `.asia`. Must be an integer:", `.asia`))
        }
        self$`.asia` <- `.asia`
      }
      if (!is.null(`.be`)) {
        if (!(is.numeric(`.be`) && length(`.be`) == 1)) {
          stop(paste("Error! Invalid data for `.be`. Must be an integer:", `.be`))
        }
        self$`.be` <- `.be`
      }
      if (!is.null(`.biz`)) {
        if (!(is.numeric(`.biz`) && length(`.biz`) == 1)) {
          stop(paste("Error! Invalid data for `.biz`. Must be an integer:", `.biz`))
        }
        self$`.biz` <- `.biz`
      }
      if (!is.null(`.ca`)) {
        if (!(is.numeric(`.ca`) && length(`.ca`) == 1)) {
          stop(paste("Error! Invalid data for `.ca`. Must be an integer:", `.ca`))
        }
        self$`.ca` <- `.ca`
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
    #' @return DomainOrderTldServices as a base R list.
    #' @examples
    #' # convert array of DomainOrderTldServices (x) to a data frame
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
    #' Convert DomainOrderTldServices to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      DomainOrderTldServicesObject <- list()
      if (!is.null(self$`.asia`)) {
        DomainOrderTldServicesObject[[".asia"]] <-
          self$`.asia`
      }
      if (!is.null(self$`.be`)) {
        DomainOrderTldServicesObject[[".be"]] <-
          self$`.be`
      }
      if (!is.null(self$`.biz`)) {
        DomainOrderTldServicesObject[[".biz"]] <-
          self$`.biz`
      }
      if (!is.null(self$`.ca`)) {
        DomainOrderTldServicesObject[[".ca"]] <-
          self$`.ca`
      }
      return(DomainOrderTldServicesObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainOrderTldServices
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainOrderTldServices
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`.asia`)) {
        self$`.asia` <- this_object$`.asia`
      }
      if (!is.null(this_object$`.be`)) {
        self$`.be` <- this_object$`.be`
      }
      if (!is.null(this_object$`.biz`)) {
        self$`.biz` <- this_object$`.biz`
      }
      if (!is.null(this_object$`.ca`)) {
        self$`.ca` <- this_object$`.ca`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return DomainOrderTldServices in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainOrderTldServices
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainOrderTldServices
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`.asia` <- this_object$`.asia`
      self$`.be` <- this_object$`.be`
      self$`.biz` <- this_object$`.biz`
      self$`.ca` <- this_object$`.ca`
      self
    },

    #' @description
    #' Validate JSON input with respect to DomainOrderTldServices and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of DomainOrderTldServices
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
# DomainOrderTldServices$unlock()
#
## Below is an example to define the print function
# DomainOrderTldServices$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# DomainOrderTldServices$lock()

