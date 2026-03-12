#' Create a new MailStatsTypeVolume
#'
#' @description
#' MailStatsTypeVolume Class
#'
#' @docType class
#' @title MailStatsTypeVolume
#' @description MailStatsTypeVolume Class
#' @format An \code{R6Class} generator object
#' @field to  \link{MailStatsTypeVolumeTo} [optional]
#' @field from  \link{MailStatsTypeVolumeFrom} [optional]
#' @field ip  \link{MailStatsTypeVolumeIp} [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
MailStatsTypeVolume <- R6::R6Class(
  "MailStatsTypeVolume",
  public = list(
    `to` = NULL,
    `from` = NULL,
    `ip` = NULL,

    #' @description
    #' Initialize a new MailStatsTypeVolume class.
    #'
    #' @param to to
    #' @param from from
    #' @param ip ip
    #' @param ... Other optional arguments.
    initialize = function(`to` = NULL, `from` = NULL, `ip` = NULL, ...) {
      if (!is.null(`to`)) {
        stopifnot(R6::is.R6(`to`))
        self$`to` <- `to`
      }
      if (!is.null(`from`)) {
        stopifnot(R6::is.R6(`from`))
        self$`from` <- `from`
      }
      if (!is.null(`ip`)) {
        stopifnot(R6::is.R6(`ip`))
        self$`ip` <- `ip`
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
    #' @return MailStatsTypeVolume as a base R list.
    #' @examples
    #' # convert array of MailStatsTypeVolume (x) to a data frame
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
    #' Convert MailStatsTypeVolume to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      MailStatsTypeVolumeObject <- list()
      if (!is.null(self$`to`)) {
        MailStatsTypeVolumeObject[["to"]] <-
          self$extractSimpleType(self$`to`)
      }
      if (!is.null(self$`from`)) {
        MailStatsTypeVolumeObject[["from"]] <-
          self$extractSimpleType(self$`from`)
      }
      if (!is.null(self$`ip`)) {
        MailStatsTypeVolumeObject[["ip"]] <-
          self$extractSimpleType(self$`ip`)
      }
      return(MailStatsTypeVolumeObject)
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
    #' Deserialize JSON string into an instance of MailStatsTypeVolume
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailStatsTypeVolume
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`to`)) {
        `to_object` <- MailStatsTypeVolumeTo$new()
        `to_object`$fromJSON(jsonlite::toJSON(this_object$`to`, auto_unbox = TRUE, digits = NA))
        self$`to` <- `to_object`
      }
      if (!is.null(this_object$`from`)) {
        `from_object` <- MailStatsTypeVolumeFrom$new()
        `from_object`$fromJSON(jsonlite::toJSON(this_object$`from`, auto_unbox = TRUE, digits = NA))
        self$`from` <- `from_object`
      }
      if (!is.null(this_object$`ip`)) {
        `ip_object` <- MailStatsTypeVolumeIp$new()
        `ip_object`$fromJSON(jsonlite::toJSON(this_object$`ip`, auto_unbox = TRUE, digits = NA))
        self$`ip` <- `ip_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return MailStatsTypeVolume in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of MailStatsTypeVolume
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailStatsTypeVolume
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`to` <- MailStatsTypeVolumeTo$new()$fromJSON(jsonlite::toJSON(this_object$`to`, auto_unbox = TRUE, digits = NA))
      self$`from` <- MailStatsTypeVolumeFrom$new()$fromJSON(jsonlite::toJSON(this_object$`from`, auto_unbox = TRUE, digits = NA))
      self$`ip` <- MailStatsTypeVolumeIp$new()$fromJSON(jsonlite::toJSON(this_object$`ip`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to MailStatsTypeVolume and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of MailStatsTypeVolume
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
# MailStatsTypeVolume$unlock()
#
## Below is an example to define the print function
# MailStatsTypeVolume$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# MailStatsTypeVolume$lock()

