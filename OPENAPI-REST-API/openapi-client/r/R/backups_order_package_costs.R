#' Create a new BackupsOrderPackageCosts
#'
#' @description
#' BackupsOrderPackageCosts Class
#'
#' @docType class
#' @title BackupsOrderPackageCosts
#' @description BackupsOrderPackageCosts Class
#' @format An \code{R6Class} generator object
#' @field 11006 The cost associated with package 11006. integer
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
BackupsOrderPackageCosts <- R6::R6Class(
  "BackupsOrderPackageCosts",
  public = list(
    `11006` = NULL,

    #' @description
    #' Initialize a new BackupsOrderPackageCosts class.
    #'
    #' @param 11006 The cost associated with package 11006.
    #' @param ... Other optional arguments.
    initialize = function(`11006`, ...) {
      if (!missing(`11006`)) {
        if (!(is.numeric(`11006`) && length(`11006`) == 1)) {
          stop(paste("Error! Invalid data for `11006`. Must be an integer:", `11006`))
        }
        self$`11006` <- `11006`
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
    #' @return BackupsOrderPackageCosts as a base R list.
    #' @examples
    #' # convert array of BackupsOrderPackageCosts (x) to a data frame
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
    #' Convert BackupsOrderPackageCosts to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      BackupsOrderPackageCostsObject <- list()
      if (!is.null(self$`11006`)) {
        BackupsOrderPackageCostsObject[["11006"]] <-
          self$`11006`
      }
      return(BackupsOrderPackageCostsObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of BackupsOrderPackageCosts
    #'
    #' @param input_json the JSON input
    #' @return the instance of BackupsOrderPackageCosts
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`11006`)) {
        self$`11006` <- this_object$`11006`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return BackupsOrderPackageCosts in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of BackupsOrderPackageCosts
    #'
    #' @param input_json the JSON input
    #' @return the instance of BackupsOrderPackageCosts
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`11006` <- this_object$`11006`
      self
    },

    #' @description
    #' Validate JSON input with respect to BackupsOrderPackageCosts and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `11006`
      if (!is.null(input_json$`11006`)) {
        if (!(is.numeric(input_json$`11006`) && length(input_json$`11006`) == 1)) {
          stop(paste("Error! Invalid data for `11006`. Must be an integer:", input_json$`11006`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for BackupsOrderPackageCosts: the required field `11006` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of BackupsOrderPackageCosts
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `11006` is null
      if (is.null(self$`11006`)) {
        return(FALSE)
      }

      TRUE
    },

    #' @description
    #' Return a list of invalid fields (if any).
    #'
    #' @return A list of invalid fields (if any).
    getInvalidFields = function() {
      invalid_fields <- list()
      # check if the required `11006` is null
      if (is.null(self$`11006`)) {
        invalid_fields["11006"] <- "Non-nullable required field `11006` cannot be null."
      }

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
# BackupsOrderPackageCosts$unlock()
#
## Below is an example to define the print function
# BackupsOrderPackageCosts$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# BackupsOrderPackageCosts$lock()

