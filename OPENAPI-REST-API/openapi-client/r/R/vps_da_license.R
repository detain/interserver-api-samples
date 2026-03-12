#' Create a new VpsDALicense
#'
#' @description
#' A DirectAdmin license tier option.
#'
#' @docType class
#' @title VpsDALicense
#' @description VpsDALicense Class
#' @format An \code{R6Class} generator object
#' @field name License tier name. character [optional]
#' @field sub_name License tier sub-name. character [optional]
#' @field cost Monthly cost in cents. integer [optional]
#' @field img_disabled Image path for the disabled state icon. character [optional]
#' @field img_active Image path for the active state icon. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VpsDALicense <- R6::R6Class(
  "VpsDALicense",
  public = list(
    `name` = NULL,
    `sub_name` = NULL,
    `cost` = NULL,
    `img_disabled` = NULL,
    `img_active` = NULL,

    #' @description
    #' Initialize a new VpsDALicense class.
    #'
    #' @param name License tier name.
    #' @param sub_name License tier sub-name.
    #' @param cost Monthly cost in cents.
    #' @param img_disabled Image path for the disabled state icon.
    #' @param img_active Image path for the active state icon.
    #' @param ... Other optional arguments.
    initialize = function(`name` = NULL, `sub_name` = NULL, `cost` = NULL, `img_disabled` = NULL, `img_active` = NULL, ...) {
      if (!is.null(`name`)) {
        if (!(is.character(`name`) && length(`name`) == 1)) {
          stop(paste("Error! Invalid data for `name`. Must be a string:", `name`))
        }
        self$`name` <- `name`
      }
      if (!is.null(`sub_name`)) {
        if (!(is.character(`sub_name`) && length(`sub_name`) == 1)) {
          stop(paste("Error! Invalid data for `sub_name`. Must be a string:", `sub_name`))
        }
        self$`sub_name` <- `sub_name`
      }
      if (!is.null(`cost`)) {
        if (!(is.numeric(`cost`) && length(`cost`) == 1)) {
          stop(paste("Error! Invalid data for `cost`. Must be an integer:", `cost`))
        }
        self$`cost` <- `cost`
      }
      if (!is.null(`img_disabled`)) {
        if (!(is.character(`img_disabled`) && length(`img_disabled`) == 1)) {
          stop(paste("Error! Invalid data for `img_disabled`. Must be a string:", `img_disabled`))
        }
        self$`img_disabled` <- `img_disabled`
      }
      if (!is.null(`img_active`)) {
        if (!(is.character(`img_active`) && length(`img_active`) == 1)) {
          stop(paste("Error! Invalid data for `img_active`. Must be a string:", `img_active`))
        }
        self$`img_active` <- `img_active`
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
    #' @return VpsDALicense as a base R list.
    #' @examples
    #' # convert array of VpsDALicense (x) to a data frame
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
    #' Convert VpsDALicense to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VpsDALicenseObject <- list()
      if (!is.null(self$`name`)) {
        VpsDALicenseObject[["name"]] <-
          self$`name`
      }
      if (!is.null(self$`sub_name`)) {
        VpsDALicenseObject[["sub_name"]] <-
          self$`sub_name`
      }
      if (!is.null(self$`cost`)) {
        VpsDALicenseObject[["cost"]] <-
          self$`cost`
      }
      if (!is.null(self$`img_disabled`)) {
        VpsDALicenseObject[["img_disabled"]] <-
          self$`img_disabled`
      }
      if (!is.null(self$`img_active`)) {
        VpsDALicenseObject[["img_active"]] <-
          self$`img_active`
      }
      return(VpsDALicenseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsDALicense
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsDALicense
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`name`)) {
        self$`name` <- this_object$`name`
      }
      if (!is.null(this_object$`sub_name`)) {
        self$`sub_name` <- this_object$`sub_name`
      }
      if (!is.null(this_object$`cost`)) {
        self$`cost` <- this_object$`cost`
      }
      if (!is.null(this_object$`img_disabled`)) {
        self$`img_disabled` <- this_object$`img_disabled`
      }
      if (!is.null(this_object$`img_active`)) {
        self$`img_active` <- this_object$`img_active`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return VpsDALicense in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsDALicense
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsDALicense
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`name` <- this_object$`name`
      self$`sub_name` <- this_object$`sub_name`
      self$`cost` <- this_object$`cost`
      self$`img_disabled` <- this_object$`img_disabled`
      self$`img_active` <- this_object$`img_active`
      self
    },

    #' @description
    #' Validate JSON input with respect to VpsDALicense and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VpsDALicense
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
# VpsDALicense$unlock()
#
## Below is an example to define the print function
# VpsDALicense$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VpsDALicense$lock()

