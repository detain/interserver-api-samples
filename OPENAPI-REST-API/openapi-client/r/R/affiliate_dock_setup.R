#' Create a new AffiliateDockSetup
#'
#' @description
#' Affiliate Landing Page information.
#'
#' @docType class
#' @title AffiliateDockSetup
#' @description AffiliateDockSetup Class
#' @format An \code{R6Class} generator object
#' @field affiliate_dock_title  character [optional]
#' @field affiliate_dock_description  character [optional]
#' @field referrer_coupon  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
AffiliateDockSetup <- R6::R6Class(
  "AffiliateDockSetup",
  public = list(
    `affiliate_dock_title` = NULL,
    `affiliate_dock_description` = NULL,
    `referrer_coupon` = NULL,

    #' @description
    #' Initialize a new AffiliateDockSetup class.
    #'
    #' @param affiliate_dock_title affiliate_dock_title
    #' @param affiliate_dock_description affiliate_dock_description
    #' @param referrer_coupon referrer_coupon
    #' @param ... Other optional arguments.
    initialize = function(`affiliate_dock_title` = NULL, `affiliate_dock_description` = NULL, `referrer_coupon` = NULL, ...) {
      if (!is.null(`affiliate_dock_title`)) {
        if (!(is.character(`affiliate_dock_title`) && length(`affiliate_dock_title`) == 1)) {
          stop(paste("Error! Invalid data for `affiliate_dock_title`. Must be a string:", `affiliate_dock_title`))
        }
        self$`affiliate_dock_title` <- `affiliate_dock_title`
      }
      if (!is.null(`affiliate_dock_description`)) {
        if (!(is.character(`affiliate_dock_description`) && length(`affiliate_dock_description`) == 1)) {
          stop(paste("Error! Invalid data for `affiliate_dock_description`. Must be a string:", `affiliate_dock_description`))
        }
        self$`affiliate_dock_description` <- `affiliate_dock_description`
      }
      if (!is.null(`referrer_coupon`)) {
        if (!(is.character(`referrer_coupon`) && length(`referrer_coupon`) == 1)) {
          stop(paste("Error! Invalid data for `referrer_coupon`. Must be a string:", `referrer_coupon`))
        }
        self$`referrer_coupon` <- `referrer_coupon`
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
    #' @return AffiliateDockSetup as a base R list.
    #' @examples
    #' # convert array of AffiliateDockSetup (x) to a data frame
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
    #' Convert AffiliateDockSetup to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      AffiliateDockSetupObject <- list()
      if (!is.null(self$`affiliate_dock_title`)) {
        AffiliateDockSetupObject[["affiliate_dock_title"]] <-
          self$`affiliate_dock_title`
      }
      if (!is.null(self$`affiliate_dock_description`)) {
        AffiliateDockSetupObject[["affiliate_dock_description"]] <-
          self$`affiliate_dock_description`
      }
      if (!is.null(self$`referrer_coupon`)) {
        AffiliateDockSetupObject[["referrer_coupon"]] <-
          self$`referrer_coupon`
      }
      return(AffiliateDockSetupObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of AffiliateDockSetup
    #'
    #' @param input_json the JSON input
    #' @return the instance of AffiliateDockSetup
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`affiliate_dock_title`)) {
        self$`affiliate_dock_title` <- this_object$`affiliate_dock_title`
      }
      if (!is.null(this_object$`affiliate_dock_description`)) {
        self$`affiliate_dock_description` <- this_object$`affiliate_dock_description`
      }
      if (!is.null(this_object$`referrer_coupon`)) {
        self$`referrer_coupon` <- this_object$`referrer_coupon`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return AffiliateDockSetup in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of AffiliateDockSetup
    #'
    #' @param input_json the JSON input
    #' @return the instance of AffiliateDockSetup
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`affiliate_dock_title` <- this_object$`affiliate_dock_title`
      self$`affiliate_dock_description` <- this_object$`affiliate_dock_description`
      self$`referrer_coupon` <- this_object$`referrer_coupon`
      self
    },

    #' @description
    #' Validate JSON input with respect to AffiliateDockSetup and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of AffiliateDockSetup
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
# AffiliateDockSetup$unlock()
#
## Below is an example to define the print function
# AffiliateDockSetup$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# AffiliateDockSetup$lock()

