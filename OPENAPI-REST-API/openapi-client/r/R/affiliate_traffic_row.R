#' Create a new AffiliateTrafficRow
#'
#' @description
#' Affiliate Web Traffic Entry
#'
#' @docType class
#' @title AffiliateTrafficRow
#' @description AffiliateTrafficRow Class
#' @format An \code{R6Class} generator object
#' @field traffic_id  character [optional]
#' @field traffic_ip  character [optional]
#' @field traffic_url  character [optional]
#' @field traffic_affiliate  character [optional]
#' @field traffic_referrer  character [optional]
#' @field traffic_timestamp  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
AffiliateTrafficRow <- R6::R6Class(
  "AffiliateTrafficRow",
  public = list(
    `traffic_id` = NULL,
    `traffic_ip` = NULL,
    `traffic_url` = NULL,
    `traffic_affiliate` = NULL,
    `traffic_referrer` = NULL,
    `traffic_timestamp` = NULL,

    #' @description
    #' Initialize a new AffiliateTrafficRow class.
    #'
    #' @param traffic_id traffic_id
    #' @param traffic_ip traffic_ip
    #' @param traffic_url traffic_url
    #' @param traffic_affiliate traffic_affiliate
    #' @param traffic_referrer traffic_referrer
    #' @param traffic_timestamp traffic_timestamp
    #' @param ... Other optional arguments.
    initialize = function(`traffic_id` = NULL, `traffic_ip` = NULL, `traffic_url` = NULL, `traffic_affiliate` = NULL, `traffic_referrer` = NULL, `traffic_timestamp` = NULL, ...) {
      if (!is.null(`traffic_id`)) {
        if (!(is.character(`traffic_id`) && length(`traffic_id`) == 1)) {
          stop(paste("Error! Invalid data for `traffic_id`. Must be a string:", `traffic_id`))
        }
        self$`traffic_id` <- `traffic_id`
      }
      if (!is.null(`traffic_ip`)) {
        if (!(is.character(`traffic_ip`) && length(`traffic_ip`) == 1)) {
          stop(paste("Error! Invalid data for `traffic_ip`. Must be a string:", `traffic_ip`))
        }
        self$`traffic_ip` <- `traffic_ip`
      }
      if (!is.null(`traffic_url`)) {
        if (!(is.character(`traffic_url`) && length(`traffic_url`) == 1)) {
          stop(paste("Error! Invalid data for `traffic_url`. Must be a string:", `traffic_url`))
        }
        self$`traffic_url` <- `traffic_url`
      }
      if (!is.null(`traffic_affiliate`)) {
        if (!(is.character(`traffic_affiliate`) && length(`traffic_affiliate`) == 1)) {
          stop(paste("Error! Invalid data for `traffic_affiliate`. Must be a string:", `traffic_affiliate`))
        }
        self$`traffic_affiliate` <- `traffic_affiliate`
      }
      if (!is.null(`traffic_referrer`)) {
        if (!(is.character(`traffic_referrer`) && length(`traffic_referrer`) == 1)) {
          stop(paste("Error! Invalid data for `traffic_referrer`. Must be a string:", `traffic_referrer`))
        }
        self$`traffic_referrer` <- `traffic_referrer`
      }
      if (!is.null(`traffic_timestamp`)) {
        if (!(is.character(`traffic_timestamp`) && length(`traffic_timestamp`) == 1)) {
          stop(paste("Error! Invalid data for `traffic_timestamp`. Must be a string:", `traffic_timestamp`))
        }
        self$`traffic_timestamp` <- `traffic_timestamp`
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
    #' @return AffiliateTrafficRow as a base R list.
    #' @examples
    #' # convert array of AffiliateTrafficRow (x) to a data frame
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
    #' Convert AffiliateTrafficRow to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      AffiliateTrafficRowObject <- list()
      if (!is.null(self$`traffic_id`)) {
        AffiliateTrafficRowObject[["traffic_id"]] <-
          self$`traffic_id`
      }
      if (!is.null(self$`traffic_ip`)) {
        AffiliateTrafficRowObject[["traffic_ip"]] <-
          self$`traffic_ip`
      }
      if (!is.null(self$`traffic_url`)) {
        AffiliateTrafficRowObject[["traffic_url"]] <-
          self$`traffic_url`
      }
      if (!is.null(self$`traffic_affiliate`)) {
        AffiliateTrafficRowObject[["traffic_affiliate"]] <-
          self$`traffic_affiliate`
      }
      if (!is.null(self$`traffic_referrer`)) {
        AffiliateTrafficRowObject[["traffic_referrer"]] <-
          self$`traffic_referrer`
      }
      if (!is.null(self$`traffic_timestamp`)) {
        AffiliateTrafficRowObject[["traffic_timestamp"]] <-
          self$`traffic_timestamp`
      }
      return(AffiliateTrafficRowObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of AffiliateTrafficRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of AffiliateTrafficRow
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`traffic_id`)) {
        self$`traffic_id` <- this_object$`traffic_id`
      }
      if (!is.null(this_object$`traffic_ip`)) {
        self$`traffic_ip` <- this_object$`traffic_ip`
      }
      if (!is.null(this_object$`traffic_url`)) {
        self$`traffic_url` <- this_object$`traffic_url`
      }
      if (!is.null(this_object$`traffic_affiliate`)) {
        self$`traffic_affiliate` <- this_object$`traffic_affiliate`
      }
      if (!is.null(this_object$`traffic_referrer`)) {
        self$`traffic_referrer` <- this_object$`traffic_referrer`
      }
      if (!is.null(this_object$`traffic_timestamp`)) {
        self$`traffic_timestamp` <- this_object$`traffic_timestamp`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return AffiliateTrafficRow in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of AffiliateTrafficRow
    #'
    #' @param input_json the JSON input
    #' @return the instance of AffiliateTrafficRow
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`traffic_id` <- this_object$`traffic_id`
      self$`traffic_ip` <- this_object$`traffic_ip`
      self$`traffic_url` <- this_object$`traffic_url`
      self$`traffic_affiliate` <- this_object$`traffic_affiliate`
      self$`traffic_referrer` <- this_object$`traffic_referrer`
      self$`traffic_timestamp` <- this_object$`traffic_timestamp`
      self
    },

    #' @description
    #' Validate JSON input with respect to AffiliateTrafficRow and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of AffiliateTrafficRow
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
# AffiliateTrafficRow$unlock()
#
## Below is an example to define the print function
# AffiliateTrafficRow$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# AffiliateTrafficRow$lock()

