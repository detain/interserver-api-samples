#' Create a new ServiceCategory
#'
#' @description
#' A Category of Services.  This is the broadest grouping within a module.
#'
#' @docType class
#' @title ServiceCategory
#' @description ServiceCategory Class
#' @format An \code{R6Class} generator object
#' @field category_id  integer
#' @field category_name  character
#' @field category_tag  character
#' @field category_module  character
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ServiceCategory <- R6::R6Class(
  "ServiceCategory",
  public = list(
    `category_id` = NULL,
    `category_name` = NULL,
    `category_tag` = NULL,
    `category_module` = NULL,

    #' @description
    #' Initialize a new ServiceCategory class.
    #'
    #' @param category_id category_id
    #' @param category_name category_name
    #' @param category_tag category_tag
    #' @param category_module category_module
    #' @param ... Other optional arguments.
    initialize = function(`category_id`, `category_name`, `category_tag`, `category_module`, ...) {
      if (!missing(`category_id`)) {
        if (!(is.numeric(`category_id`) && length(`category_id`) == 1)) {
          stop(paste("Error! Invalid data for `category_id`. Must be an integer:", `category_id`))
        }
        self$`category_id` <- `category_id`
      }
      if (!missing(`category_name`)) {
        if (!(is.character(`category_name`) && length(`category_name`) == 1)) {
          stop(paste("Error! Invalid data for `category_name`. Must be a string:", `category_name`))
        }
        self$`category_name` <- `category_name`
      }
      if (!missing(`category_tag`)) {
        if (!(is.character(`category_tag`) && length(`category_tag`) == 1)) {
          stop(paste("Error! Invalid data for `category_tag`. Must be a string:", `category_tag`))
        }
        self$`category_tag` <- `category_tag`
      }
      if (!missing(`category_module`)) {
        if (!(is.character(`category_module`) && length(`category_module`) == 1)) {
          stop(paste("Error! Invalid data for `category_module`. Must be a string:", `category_module`))
        }
        self$`category_module` <- `category_module`
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
    #' @return ServiceCategory as a base R list.
    #' @examples
    #' # convert array of ServiceCategory (x) to a data frame
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
    #' Convert ServiceCategory to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ServiceCategoryObject <- list()
      if (!is.null(self$`category_id`)) {
        ServiceCategoryObject[["category_id"]] <-
          self$`category_id`
      }
      if (!is.null(self$`category_name`)) {
        ServiceCategoryObject[["category_name"]] <-
          self$`category_name`
      }
      if (!is.null(self$`category_tag`)) {
        ServiceCategoryObject[["category_tag"]] <-
          self$`category_tag`
      }
      if (!is.null(self$`category_module`)) {
        ServiceCategoryObject[["category_module"]] <-
          self$`category_module`
      }
      return(ServiceCategoryObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of ServiceCategory
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServiceCategory
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`category_id`)) {
        self$`category_id` <- this_object$`category_id`
      }
      if (!is.null(this_object$`category_name`)) {
        self$`category_name` <- this_object$`category_name`
      }
      if (!is.null(this_object$`category_tag`)) {
        self$`category_tag` <- this_object$`category_tag`
      }
      if (!is.null(this_object$`category_module`)) {
        self$`category_module` <- this_object$`category_module`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ServiceCategory in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ServiceCategory
    #'
    #' @param input_json the JSON input
    #' @return the instance of ServiceCategory
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`category_id` <- this_object$`category_id`
      self$`category_name` <- this_object$`category_name`
      self$`category_tag` <- this_object$`category_tag`
      self$`category_module` <- this_object$`category_module`
      self
    },

    #' @description
    #' Validate JSON input with respect to ServiceCategory and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `category_id`
      if (!is.null(input_json$`category_id`)) {
        if (!(is.numeric(input_json$`category_id`) && length(input_json$`category_id`) == 1)) {
          stop(paste("Error! Invalid data for `category_id`. Must be an integer:", input_json$`category_id`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServiceCategory: the required field `category_id` is missing."))
      }
      # check the required field `category_name`
      if (!is.null(input_json$`category_name`)) {
        if (!(is.character(input_json$`category_name`) && length(input_json$`category_name`) == 1)) {
          stop(paste("Error! Invalid data for `category_name`. Must be a string:", input_json$`category_name`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServiceCategory: the required field `category_name` is missing."))
      }
      # check the required field `category_tag`
      if (!is.null(input_json$`category_tag`)) {
        if (!(is.character(input_json$`category_tag`) && length(input_json$`category_tag`) == 1)) {
          stop(paste("Error! Invalid data for `category_tag`. Must be a string:", input_json$`category_tag`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServiceCategory: the required field `category_tag` is missing."))
      }
      # check the required field `category_module`
      if (!is.null(input_json$`category_module`)) {
        if (!(is.character(input_json$`category_module`) && length(input_json$`category_module`) == 1)) {
          stop(paste("Error! Invalid data for `category_module`. Must be a string:", input_json$`category_module`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for ServiceCategory: the required field `category_module` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ServiceCategory
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `category_id` is null
      if (is.null(self$`category_id`)) {
        return(FALSE)
      }

      # check if the required `category_name` is null
      if (is.null(self$`category_name`)) {
        return(FALSE)
      }

      # check if the required `category_tag` is null
      if (is.null(self$`category_tag`)) {
        return(FALSE)
      }

      # check if the required `category_module` is null
      if (is.null(self$`category_module`)) {
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
      # check if the required `category_id` is null
      if (is.null(self$`category_id`)) {
        invalid_fields["category_id"] <- "Non-nullable required field `category_id` cannot be null."
      }

      # check if the required `category_name` is null
      if (is.null(self$`category_name`)) {
        invalid_fields["category_name"] <- "Non-nullable required field `category_name` cannot be null."
      }

      # check if the required `category_tag` is null
      if (is.null(self$`category_tag`)) {
        invalid_fields["category_tag"] <- "Non-nullable required field `category_tag` cannot be null."
      }

      # check if the required `category_module` is null
      if (is.null(self$`category_module`)) {
        invalid_fields["category_module"] <- "Non-nullable required field `category_module` cannot be null."
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
# ServiceCategory$unlock()
#
## Below is an example to define the print function
# ServiceCategory$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ServiceCategory$lock()

