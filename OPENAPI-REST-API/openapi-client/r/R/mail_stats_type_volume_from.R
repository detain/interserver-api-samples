#' Create a new MailStatsTypeVolumeFrom
#'
#' @description
#' MailStatsTypeVolumeFrom Class
#'
#' @docType class
#' @title MailStatsTypeVolumeFrom
#' @description MailStatsTypeVolumeFrom Class
#' @format An \code{R6Class} generator object
#' @field billing@somedomain.com  integer [optional]
#' @field sales@somedomain.com  integer [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
MailStatsTypeVolumeFrom <- R6::R6Class(
  "MailStatsTypeVolumeFrom",
  public = list(
    `billing@somedomain.com` = NULL,
    `sales@somedomain.com` = NULL,

    #' @description
    #' Initialize a new MailStatsTypeVolumeFrom class.
    #'
    #' @param billing@somedomain.com billing@somedomain.com
    #' @param sales@somedomain.com sales@somedomain.com
    #' @param ... Other optional arguments.
    initialize = function(`billing@somedomain.com` = NULL, `sales@somedomain.com` = NULL, ...) {
      if (!is.null(`billing@somedomain.com`)) {
        if (!(is.numeric(`billing@somedomain.com`) && length(`billing@somedomain.com`) == 1)) {
          stop(paste("Error! Invalid data for `billing@somedomain.com`. Must be an integer:", `billing@somedomain.com`))
        }
        self$`billing@somedomain.com` <- `billing@somedomain.com`
      }
      if (!is.null(`sales@somedomain.com`)) {
        if (!(is.numeric(`sales@somedomain.com`) && length(`sales@somedomain.com`) == 1)) {
          stop(paste("Error! Invalid data for `sales@somedomain.com`. Must be an integer:", `sales@somedomain.com`))
        }
        self$`sales@somedomain.com` <- `sales@somedomain.com`
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
    #' @return MailStatsTypeVolumeFrom as a base R list.
    #' @examples
    #' # convert array of MailStatsTypeVolumeFrom (x) to a data frame
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
    #' Convert MailStatsTypeVolumeFrom to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      MailStatsTypeVolumeFromObject <- list()
      if (!is.null(self$`billing@somedomain.com`)) {
        MailStatsTypeVolumeFromObject[["billing@somedomain.com"]] <-
          self$`billing@somedomain.com`
      }
      if (!is.null(self$`sales@somedomain.com`)) {
        MailStatsTypeVolumeFromObject[["sales@somedomain.com"]] <-
          self$`sales@somedomain.com`
      }
      return(MailStatsTypeVolumeFromObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of MailStatsTypeVolumeFrom
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailStatsTypeVolumeFrom
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`billing@somedomain.com`)) {
        self$`billing@somedomain.com` <- this_object$`billing@somedomain.com`
      }
      if (!is.null(this_object$`sales@somedomain.com`)) {
        self$`sales@somedomain.com` <- this_object$`sales@somedomain.com`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return MailStatsTypeVolumeFrom in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of MailStatsTypeVolumeFrom
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailStatsTypeVolumeFrom
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`billing@somedomain.com` <- this_object$`billing@somedomain.com`
      self$`sales@somedomain.com` <- this_object$`sales@somedomain.com`
      self
    },

    #' @description
    #' Validate JSON input with respect to MailStatsTypeVolumeFrom and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of MailStatsTypeVolumeFrom
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
# MailStatsTypeVolumeFrom$unlock()
#
## Below is an example to define the print function
# MailStatsTypeVolumeFrom$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# MailStatsTypeVolumeFrom$lock()

