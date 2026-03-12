#' Create a new ServicesInfo
#'
#' @description
#' Contains the complete catalog of available modules, services, service types, and service categories.
#'
#' @docType class
#' @title ServicesInfo
#' @description ServicesInfo Class
#' @format An \code{R6Class} generator object
#' @field modules  \link{Modules}
#' @field services  \link{Services}
#' @field serviceTypes  \link{ServiceTypes}
#' @field serviceCategories  \link{ServiceCategories}
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ServicesInfo <- R6::R6Class(
  "ServicesInfo",
  public = list(
    `modules` = NULL,
    `services` = NULL,
    `serviceTypes` = NULL,
    `serviceCategories` = NULL,

    #' @description
    #' Initialize a new ServicesInfo class.
    #'
    #' @param modules modules
    #' @param services services
    #' @param serviceTypes serviceTypes
    #' @param serviceCategories serviceCategories
    #' @param ... Other optional arguments.
    initialize = function(`modules`, `services`, `serviceTypes`, `serviceCategories`, ...) {
      if (!missing(`modules`)) {
        stopifnot(R6::is.R6(`modules`))
        self$`modules` <- `modules`
      }
      if (!missing(`services`)) {
        stopifnot(R6::is.R6(`services`))
        self$`services` <- `services`
      }
      if (!missing(`serviceTypes`)) {
        stopifnot(R6::is.R6(`serviceTypes`))
        self$`serviceTypes` <- `serviceTypes`
      }
      if (!missing(`serviceCategories`)) {
        stopifnot(R6::is.R6(`serviceCategories`))
        self$`serviceCategories` <- `serviceCategories`
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
    #' @return ServicesInfo as a base R list.
    #' @examples
    #' # convert array of ServicesInfo (x) to a data frame
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
    #' Convert ServicesInfo to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServicesInfoObject <- list()
      if (!is.null(self$`modules`)) {
        ServicesInfoObject[["modules"]] <-
          self$extractSimpleType(self$`modules`)
      }
      if (!is.null(self$`services`)) {
        ServicesInfoObject[["services"]] <-
          self$extractSimpleType(self$`services`)
      }
      if (!is.null(self$`serviceTypes`)) {
        ServicesInfoObject[["serviceTypes"]] <-
          self$extractSimpleType(self$`serviceTypes`)
      }
      if (!is.null(self$`serviceCategories`)) {
        ServicesInfoObject[["serviceCategories"]] <-
          self$extractSimpleType(self$`serviceCategories`)
      }
      return(ServicesInfoObject)
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
    #' Deserialize JSON string into an instance of ServicesInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServicesInfo
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`modules`)) {
        `modules_object` <- Modules$new()
        `modules_object`$fromJSON(jsonlite::toJSON(this_object$`modules`, auto_unbox = TRUE, digits = NA))
        self$`modules` <- `modules_object`
      }
      if (!is.null(this_object$`services`)) {
        `services_object` <- Services$new()
        `services_object`$fromJSON(jsonlite::toJSON(this_object$`services`, auto_unbox = TRUE, digits = NA))
        self$`services` <- `services_object`
      }
      if (!is.null(this_object$`serviceTypes`)) {
        `servicetypes_object` <- ServiceTypes$new()
        `servicetypes_object`$fromJSON(jsonlite::toJSON(this_object$`serviceTypes`, auto_unbox = TRUE, digits = NA))
        self$`serviceTypes` <- `servicetypes_object`
      }
      if (!is.null(this_object$`serviceCategories`)) {
        `servicecategories_object` <- ServiceCategories$new()
        `servicecategories_object`$fromJSON(jsonlite::toJSON(this_object$`serviceCategories`, auto_unbox = TRUE, digits = NA))
        self$`serviceCategories` <- `servicecategories_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ServicesInfo in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ServicesInfo
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServicesInfo
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`modules` <- Modules$new()$fromJSON(jsonlite::toJSON(this_object$`modules`, auto_unbox = TRUE, digits = NA))
      self$`services` <- Services$new()$fromJSON(jsonlite::toJSON(this_object$`services`, auto_unbox = TRUE, digits = NA))
      self$`serviceTypes` <- ServiceTypes$new()$fromJSON(jsonlite::toJSON(this_object$`serviceTypes`, auto_unbox = TRUE, digits = NA))
      self$`serviceCategories` <- ServiceCategories$new()$fromJSON(jsonlite::toJSON(this_object$`serviceCategories`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to ServicesInfo and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `modules`
      if (!is.null(input_json$`modules`)) {
        stopifnot(R6::is.R6(input_json$`modules`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServicesInfo: the required field `modules` is missing."))
      }
      # check the required field `services`
      if (!is.null(input_json$`services`)) {
        stopifnot(R6::is.R6(input_json$`services`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServicesInfo: the required field `services` is missing."))
      }
      # check the required field `serviceTypes`
      if (!is.null(input_json$`serviceTypes`)) {
        stopifnot(R6::is.R6(input_json$`serviceTypes`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServicesInfo: the required field `serviceTypes` is missing."))
      }
      # check the required field `serviceCategories`
      if (!is.null(input_json$`serviceCategories`)) {
        stopifnot(R6::is.R6(input_json$`serviceCategories`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServicesInfo: the required field `serviceCategories` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ServicesInfo
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `modules` is null
      if (is.null(self$`modules`)) {
        return(FALSE)
      }

      # check if the required `services` is null
      if (is.null(self$`services`)) {
        return(FALSE)
      }

      # check if the required `serviceTypes` is null
      if (is.null(self$`serviceTypes`)) {
        return(FALSE)
      }

      # check if the required `serviceCategories` is null
      if (is.null(self$`serviceCategories`)) {
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
      # check if the required `modules` is null
      if (is.null(self$`modules`)) {
        invalid_fields["modules"] <- "Non-nullable required field `modules` cannot be null."
      }

      # check if the required `services` is null
      if (is.null(self$`services`)) {
        invalid_fields["services"] <- "Non-nullable required field `services` cannot be null."
      }

      # check if the required `serviceTypes` is null
      if (is.null(self$`serviceTypes`)) {
        invalid_fields["serviceTypes"] <- "Non-nullable required field `serviceTypes` cannot be null."
      }

      # check if the required `serviceCategories` is null
      if (is.null(self$`serviceCategories`)) {
        invalid_fields["serviceCategories"] <- "Non-nullable required field `serviceCategories` cannot be null."
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
# ServicesInfo$unlock()
#
## Below is an example to define the print function
# ServicesInfo$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ServicesInfo$lock()

