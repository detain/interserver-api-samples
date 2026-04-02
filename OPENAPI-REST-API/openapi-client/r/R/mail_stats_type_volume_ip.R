#' Create a new MailStatsTypeVolumeIp
#'
#' @description
#' MailStatsTypeVolumeIp Class
#'
#' @docType class
#' @title MailStatsTypeVolumeIp
#' @description MailStatsTypeVolumeIp Class
#' @format An \code{R6Class} generator object
#' @field 1.1.1.1  integer [optional]
#' @field 2.2.2.2  integer [optional]
#' @field 3.3.3.3  integer [optional]
#' @field 4.4.4.4  integer [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
MailStatsTypeVolumeIp <- R6::R6Class(
  "MailStatsTypeVolumeIp",
  public = list(
    `1.1.1.1` = NULL,
    `2.2.2.2` = NULL,
    `3.3.3.3` = NULL,
    `4.4.4.4` = NULL,

    #' @description
    #' Initialize a new MailStatsTypeVolumeIp class.
    #'
    #' @param 1.1.1.1 1.1.1.1
    #' @param 2.2.2.2 2.2.2.2
    #' @param 3.3.3.3 3.3.3.3
    #' @param 4.4.4.4 4.4.4.4
    #' @param ... Other optional arguments.
    initialize = function(`1.1.1.1` = NULL, `2.2.2.2` = NULL, `3.3.3.3` = NULL, `4.4.4.4` = NULL, ...) {
      if (!is.null(`1.1.1.1`)) {
        if (!(is.numeric(`1.1.1.1`) && length(`1.1.1.1`) == 1)) {
          stop(paste("Error! Invalid data for `1.1.1.1`. Must be an integer:", `1.1.1.1`))
        }
        self$`1.1.1.1` <- `1.1.1.1`
      }
      if (!is.null(`2.2.2.2`)) {
        if (!(is.numeric(`2.2.2.2`) && length(`2.2.2.2`) == 1)) {
          stop(paste("Error! Invalid data for `2.2.2.2`. Must be an integer:", `2.2.2.2`))
        }
        self$`2.2.2.2` <- `2.2.2.2`
      }
      if (!is.null(`3.3.3.3`)) {
        if (!(is.numeric(`3.3.3.3`) && length(`3.3.3.3`) == 1)) {
          stop(paste("Error! Invalid data for `3.3.3.3`. Must be an integer:", `3.3.3.3`))
        }
        self$`3.3.3.3` <- `3.3.3.3`
      }
      if (!is.null(`4.4.4.4`)) {
        if (!(is.numeric(`4.4.4.4`) && length(`4.4.4.4`) == 1)) {
          stop(paste("Error! Invalid data for `4.4.4.4`. Must be an integer:", `4.4.4.4`))
        }
        self$`4.4.4.4` <- `4.4.4.4`
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
    #' @return MailStatsTypeVolumeIp as a base R list.
    #' @examples
    #' # convert array of MailStatsTypeVolumeIp (x) to a data frame
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
    #' Convert MailStatsTypeVolumeIp to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      MailStatsTypeVolumeIpObject <- list()
      if (!is.null(self$`1.1.1.1`)) {
        MailStatsTypeVolumeIpObject[["1.1.1.1"]] <-
          self$`1.1.1.1`
      }
      if (!is.null(self$`2.2.2.2`)) {
        MailStatsTypeVolumeIpObject[["2.2.2.2"]] <-
          self$`2.2.2.2`
      }
      if (!is.null(self$`3.3.3.3`)) {
        MailStatsTypeVolumeIpObject[["3.3.3.3"]] <-
          self$`3.3.3.3`
      }
      if (!is.null(self$`4.4.4.4`)) {
        MailStatsTypeVolumeIpObject[["4.4.4.4"]] <-
          self$`4.4.4.4`
      }
      return(MailStatsTypeVolumeIpObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of MailStatsTypeVolumeIp
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailStatsTypeVolumeIp
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`1.1.1.1`)) {
        self$`1.1.1.1` <- this_object$`1.1.1.1`
      }
      if (!is.null(this_object$`2.2.2.2`)) {
        self$`2.2.2.2` <- this_object$`2.2.2.2`
      }
      if (!is.null(this_object$`3.3.3.3`)) {
        self$`3.3.3.3` <- this_object$`3.3.3.3`
      }
      if (!is.null(this_object$`4.4.4.4`)) {
        self$`4.4.4.4` <- this_object$`4.4.4.4`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return MailStatsTypeVolumeIp in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of MailStatsTypeVolumeIp
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailStatsTypeVolumeIp
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`1.1.1.1` <- this_object$`1.1.1.1`
      self$`2.2.2.2` <- this_object$`2.2.2.2`
      self$`3.3.3.3` <- this_object$`3.3.3.3`
      self$`4.4.4.4` <- this_object$`4.4.4.4`
      self
    },

    #' @description
    #' Validate JSON input with respect to MailStatsTypeVolumeIp and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of MailStatsTypeVolumeIp
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
# MailStatsTypeVolumeIp$unlock()
#
## Below is an example to define the print function
# MailStatsTypeVolumeIp$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# MailStatsTypeVolumeIp$lock()

