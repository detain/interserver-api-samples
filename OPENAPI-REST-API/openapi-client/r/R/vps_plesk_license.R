#' Create a new VpsPleskLicense
#'
#' @description
#' VpsPleskLicense Class
#'
#' @docType class
#' @title VpsPleskLicense
#' @description VpsPleskLicense Class
#' @format An \code{R6Class} generator object
#' @field id  integer [optional]
#' @field name  character [optional]
#' @field sub_name  character [optional]
#' @field cost  integer [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VpsPleskLicense <- R6::R6Class(
  "VpsPleskLicense",
  public = list(
    `id` = NULL,
    `name` = NULL,
    `sub_name` = NULL,
    `cost` = NULL,

    #' @description
    #' Initialize a new VpsPleskLicense class.
    #'
    #' @param id id
    #' @param name name
    #' @param sub_name sub_name
    #' @param cost cost
    #' @param ... Other optional arguments.
    initialize = function(`id` = NULL, `name` = NULL, `sub_name` = NULL, `cost` = NULL, ...) {
      if (!is.null(`id`)) {
        if (!(is.numeric(`id`) && length(`id`) == 1)) {
          stop(paste("Error! Invalid data for `id`. Must be an integer:", `id`))
        }
        self$`id` <- `id`
      }
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
    #' @return VpsPleskLicense as a base R list.
    #' @examples
    #' # convert array of VpsPleskLicense (x) to a data frame
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
    #' Convert VpsPleskLicense to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VpsPleskLicenseObject <- list()
      if (!is.null(self$`id`)) {
        VpsPleskLicenseObject[["id"]] <-
          self$`id`
      }
      if (!is.null(self$`name`)) {
        VpsPleskLicenseObject[["name"]] <-
          self$`name`
      }
      if (!is.null(self$`sub_name`)) {
        VpsPleskLicenseObject[["sub_name"]] <-
          self$`sub_name`
      }
      if (!is.null(self$`cost`)) {
        VpsPleskLicenseObject[["cost"]] <-
          self$`cost`
      }
      return(VpsPleskLicenseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsPleskLicense
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsPleskLicense
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`id`)) {
        self$`id` <- this_object$`id`
      }
      if (!is.null(this_object$`name`)) {
        self$`name` <- this_object$`name`
      }
      if (!is.null(this_object$`sub_name`)) {
        self$`sub_name` <- this_object$`sub_name`
      }
      if (!is.null(this_object$`cost`)) {
        self$`cost` <- this_object$`cost`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return VpsPleskLicense in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsPleskLicense
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsPleskLicense
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`id` <- this_object$`id`
      self$`name` <- this_object$`name`
      self$`sub_name` <- this_object$`sub_name`
      self$`cost` <- this_object$`cost`
      self
    },

    #' @description
    #' Validate JSON input with respect to VpsPleskLicense and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VpsPleskLicense
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
# VpsPleskLicense$unlock()
#
## Below is an example to define the print function
# VpsPleskLicense$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VpsPleskLicense$lock()

