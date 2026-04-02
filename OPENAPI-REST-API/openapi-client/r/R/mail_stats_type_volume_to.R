#' Create a new MailStatsTypeVolumeTo
#'
#' @description
#' MailStatsTypeVolumeTo Class
#'
#' @docType class
#' @title MailStatsTypeVolumeTo
#' @description MailStatsTypeVolumeTo Class
#' @format An \code{R6Class} generator object
#' @field client@domain.com  integer [optional]
#' @field user@site.net  integer [optional]
#' @field sales@company.com  integer [optional]
#' @field client@anothersite.com  integer [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
MailStatsTypeVolumeTo <- R6::R6Class(
  "MailStatsTypeVolumeTo",
  public = list(
    `client@domain.com` = NULL,
    `user@site.net` = NULL,
    `sales@company.com` = NULL,
    `client@anothersite.com` = NULL,

    #' @description
    #' Initialize a new MailStatsTypeVolumeTo class.
    #'
    #' @param client@domain.com client@domain.com
    #' @param user@site.net user@site.net
    #' @param sales@company.com sales@company.com
    #' @param client@anothersite.com client@anothersite.com
    #' @param ... Other optional arguments.
    initialize = function(`client@domain.com` = NULL, `user@site.net` = NULL, `sales@company.com` = NULL, `client@anothersite.com` = NULL, ...) {
      if (!is.null(`client@domain.com`)) {
        if (!(is.numeric(`client@domain.com`) && length(`client@domain.com`) == 1)) {
          stop(paste("Error! Invalid data for `client@domain.com`. Must be an integer:", `client@domain.com`))
        }
        self$`client@domain.com` <- `client@domain.com`
      }
      if (!is.null(`user@site.net`)) {
        if (!(is.numeric(`user@site.net`) && length(`user@site.net`) == 1)) {
          stop(paste("Error! Invalid data for `user@site.net`. Must be an integer:", `user@site.net`))
        }
        self$`user@site.net` <- `user@site.net`
      }
      if (!is.null(`sales@company.com`)) {
        if (!(is.numeric(`sales@company.com`) && length(`sales@company.com`) == 1)) {
          stop(paste("Error! Invalid data for `sales@company.com`. Must be an integer:", `sales@company.com`))
        }
        self$`sales@company.com` <- `sales@company.com`
      }
      if (!is.null(`client@anothersite.com`)) {
        if (!(is.numeric(`client@anothersite.com`) && length(`client@anothersite.com`) == 1)) {
          stop(paste("Error! Invalid data for `client@anothersite.com`. Must be an integer:", `client@anothersite.com`))
        }
        self$`client@anothersite.com` <- `client@anothersite.com`
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
    #' @return MailStatsTypeVolumeTo as a base R list.
    #' @examples
    #' # convert array of MailStatsTypeVolumeTo (x) to a data frame
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
    #' Convert MailStatsTypeVolumeTo to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      MailStatsTypeVolumeToObject <- list()
      if (!is.null(self$`client@domain.com`)) {
        MailStatsTypeVolumeToObject[["client@domain.com"]] <-
          self$`client@domain.com`
      }
      if (!is.null(self$`user@site.net`)) {
        MailStatsTypeVolumeToObject[["user@site.net"]] <-
          self$`user@site.net`
      }
      if (!is.null(self$`sales@company.com`)) {
        MailStatsTypeVolumeToObject[["sales@company.com"]] <-
          self$`sales@company.com`
      }
      if (!is.null(self$`client@anothersite.com`)) {
        MailStatsTypeVolumeToObject[["client@anothersite.com"]] <-
          self$`client@anothersite.com`
      }
      return(MailStatsTypeVolumeToObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of MailStatsTypeVolumeTo
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailStatsTypeVolumeTo
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`client@domain.com`)) {
        self$`client@domain.com` <- this_object$`client@domain.com`
      }
      if (!is.null(this_object$`user@site.net`)) {
        self$`user@site.net` <- this_object$`user@site.net`
      }
      if (!is.null(this_object$`sales@company.com`)) {
        self$`sales@company.com` <- this_object$`sales@company.com`
      }
      if (!is.null(this_object$`client@anothersite.com`)) {
        self$`client@anothersite.com` <- this_object$`client@anothersite.com`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return MailStatsTypeVolumeTo in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of MailStatsTypeVolumeTo
    #'
    #' @param input_json the JSON input
    #' @return the instance of MailStatsTypeVolumeTo
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`client@domain.com` <- this_object$`client@domain.com`
      self$`user@site.net` <- this_object$`user@site.net`
      self$`sales@company.com` <- this_object$`sales@company.com`
      self$`client@anothersite.com` <- this_object$`client@anothersite.com`
      self
    },

    #' @description
    #' Validate JSON input with respect to MailStatsTypeVolumeTo and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of MailStatsTypeVolumeTo
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
# MailStatsTypeVolumeTo$unlock()
#
## Below is an example to define the print function
# MailStatsTypeVolumeTo$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# MailStatsTypeVolumeTo$lock()

