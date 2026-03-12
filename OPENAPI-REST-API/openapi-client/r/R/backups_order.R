#' Create a new BackupsOrder
#'
#' @description
#' Available backup storage packages and pricing for ordering a new backup service.
#'
#' @docType class
#' @title BackupsOrder
#' @description BackupsOrder Class
#' @format An \code{R6Class} generator object
#' @field packageCosts  \link{BackupsOrderPackageCosts}
#' @field serviceTypes  \link{BackupsOrderServiceTypes}
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
BackupsOrder <- R6::R6Class(
  "BackupsOrder",
  public = list(
    `packageCosts` = NULL,
    `serviceTypes` = NULL,

    #' @description
    #' Initialize a new BackupsOrder class.
    #'
    #' @param packageCosts packageCosts
    #' @param serviceTypes serviceTypes
    #' @param ... Other optional arguments.
    initialize = function(`packageCosts`, `serviceTypes`, ...) {
      if (!missing(`packageCosts`)) {
        stopifnot(R6::is.R6(`packageCosts`))
        self$`packageCosts` <- `packageCosts`
      }
      if (!missing(`serviceTypes`)) {
        stopifnot(R6::is.R6(`serviceTypes`))
        self$`serviceTypes` <- `serviceTypes`
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
    #' @return BackupsOrder as a base R list.
    #' @examples
    #' # convert array of BackupsOrder (x) to a data frame
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
    #' Convert BackupsOrder to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      BackupsOrderObject <- list()
      if (!is.null(self$`packageCosts`)) {
        BackupsOrderObject[["packageCosts"]] <-
          self$extractSimpleType(self$`packageCosts`)
      }
      if (!is.null(self$`serviceTypes`)) {
        BackupsOrderObject[["serviceTypes"]] <-
          self$extractSimpleType(self$`serviceTypes`)
      }
      return(BackupsOrderObject)
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
    #' Deserialize JSON string into an instance of BackupsOrder
    #'
    #' @param input_json the JSON input
    #' @return the instance of BackupsOrder
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`packageCosts`)) {
        `packagecosts_object` <- BackupsOrderPackageCosts$new()
        `packagecosts_object`$fromJSON(jsonlite::toJSON(this_object$`packageCosts`, auto_unbox = TRUE, digits = NA))
        self$`packageCosts` <- `packagecosts_object`
      }
      if (!is.null(this_object$`serviceTypes`)) {
        `servicetypes_object` <- BackupsOrderServiceTypes$new()
        `servicetypes_object`$fromJSON(jsonlite::toJSON(this_object$`serviceTypes`, auto_unbox = TRUE, digits = NA))
        self$`serviceTypes` <- `servicetypes_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return BackupsOrder in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of BackupsOrder
    #'
    #' @param input_json the JSON input
    #' @return the instance of BackupsOrder
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`packageCosts` <- BackupsOrderPackageCosts$new()$fromJSON(jsonlite::toJSON(this_object$`packageCosts`, auto_unbox = TRUE, digits = NA))
      self$`serviceTypes` <- BackupsOrderServiceTypes$new()$fromJSON(jsonlite::toJSON(this_object$`serviceTypes`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to BackupsOrder and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `packageCosts`
      if (!is.null(input_json$`packageCosts`)) {
        stopifnot(R6::is.R6(input_json$`packageCosts`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for BackupsOrder: the required field `packageCosts` is missing."))
      }
      # check the required field `serviceTypes`
      if (!is.null(input_json$`serviceTypes`)) {
        stopifnot(R6::is.R6(input_json$`serviceTypes`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for BackupsOrder: the required field `serviceTypes` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of BackupsOrder
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `packageCosts` is null
      if (is.null(self$`packageCosts`)) {
        return(FALSE)
      }

      # check if the required `serviceTypes` is null
      if (is.null(self$`serviceTypes`)) {
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
      # check if the required `packageCosts` is null
      if (is.null(self$`packageCosts`)) {
        invalid_fields["packageCosts"] <- "Non-nullable required field `packageCosts` cannot be null."
      }

      # check if the required `serviceTypes` is null
      if (is.null(self$`serviceTypes`)) {
        invalid_fields["serviceTypes"] <- "Non-nullable required field `serviceTypes` cannot be null."
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
# BackupsOrder$unlock()
#
## Below is an example to define the print function
# BackupsOrder$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# BackupsOrder$lock()

