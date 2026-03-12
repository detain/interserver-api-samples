#' Create a new VpsTrafficTotalsResposne
#'
#' @description
#' VPS Traffic Totals Section
#'
#' @docType class
#' @title VpsTrafficTotalsResposne
#' @description VpsTrafficTotalsResposne Class
#' @format An \code{R6Class} generator object
#' @field day  \link{VpsTrafficTotalsSectionResponse}
#' @field month  \link{VpsTrafficTotalsSectionResponse}
#' @field year  \link{VpsTrafficTotalsSectionResponse}
#' @field all  \link{VpsTrafficTotalsSectionResponse}
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VpsTrafficTotalsResposne <- R6::R6Class(
  "VpsTrafficTotalsResposne",
  public = list(
    `day` = NULL,
    `month` = NULL,
    `year` = NULL,
    `all` = NULL,

    #' @description
    #' Initialize a new VpsTrafficTotalsResposne class.
    #'
    #' @param day day
    #' @param month month
    #' @param year year
    #' @param all all
    #' @param ... Other optional arguments.
    initialize = function(`day`, `month`, `year`, `all`, ...) {
      if (!missing(`day`)) {
        stopifnot(R6::is.R6(`day`))
        self$`day` <- `day`
      }
      if (!missing(`month`)) {
        stopifnot(R6::is.R6(`month`))
        self$`month` <- `month`
      }
      if (!missing(`year`)) {
        stopifnot(R6::is.R6(`year`))
        self$`year` <- `year`
      }
      if (!missing(`all`)) {
        stopifnot(R6::is.R6(`all`))
        self$`all` <- `all`
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
    #' @return VpsTrafficTotalsResposne as a base R list.
    #' @examples
    #' # convert array of VpsTrafficTotalsResposne (x) to a data frame
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
    #' Convert VpsTrafficTotalsResposne to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VpsTrafficTotalsResposneObject <- list()
      if (!is.null(self$`day`)) {
        VpsTrafficTotalsResposneObject[["day"]] <-
          self$extractSimpleType(self$`day`)
      }
      if (!is.null(self$`month`)) {
        VpsTrafficTotalsResposneObject[["month"]] <-
          self$extractSimpleType(self$`month`)
      }
      if (!is.null(self$`year`)) {
        VpsTrafficTotalsResposneObject[["year"]] <-
          self$extractSimpleType(self$`year`)
      }
      if (!is.null(self$`all`)) {
        VpsTrafficTotalsResposneObject[["all"]] <-
          self$extractSimpleType(self$`all`)
      }
      return(VpsTrafficTotalsResposneObject)
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
    #' Deserialize JSON string into an instance of VpsTrafficTotalsResposne
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsTrafficTotalsResposne
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`day`)) {
        `day_object` <- VpsTrafficTotalsSectionResponse$new()
        `day_object`$fromJSON(jsonlite::toJSON(this_object$`day`, auto_unbox = TRUE, digits = NA))
        self$`day` <- `day_object`
      }
      if (!is.null(this_object$`month`)) {
        `month_object` <- VpsTrafficTotalsSectionResponse$new()
        `month_object`$fromJSON(jsonlite::toJSON(this_object$`month`, auto_unbox = TRUE, digits = NA))
        self$`month` <- `month_object`
      }
      if (!is.null(this_object$`year`)) {
        `year_object` <- VpsTrafficTotalsSectionResponse$new()
        `year_object`$fromJSON(jsonlite::toJSON(this_object$`year`, auto_unbox = TRUE, digits = NA))
        self$`year` <- `year_object`
      }
      if (!is.null(this_object$`all`)) {
        `all_object` <- VpsTrafficTotalsSectionResponse$new()
        `all_object`$fromJSON(jsonlite::toJSON(this_object$`all`, auto_unbox = TRUE, digits = NA))
        self$`all` <- `all_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return VpsTrafficTotalsResposne in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsTrafficTotalsResposne
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsTrafficTotalsResposne
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`day` <- VpsTrafficTotalsSectionResponse$new()$fromJSON(jsonlite::toJSON(this_object$`day`, auto_unbox = TRUE, digits = NA))
      self$`month` <- VpsTrafficTotalsSectionResponse$new()$fromJSON(jsonlite::toJSON(this_object$`month`, auto_unbox = TRUE, digits = NA))
      self$`year` <- VpsTrafficTotalsSectionResponse$new()$fromJSON(jsonlite::toJSON(this_object$`year`, auto_unbox = TRUE, digits = NA))
      self$`all` <- VpsTrafficTotalsSectionResponse$new()$fromJSON(jsonlite::toJSON(this_object$`all`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to VpsTrafficTotalsResposne and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `day`
      if (!is.null(input_json$`day`)) {
        stopifnot(R6::is.R6(input_json$`day`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsTrafficTotalsResposne: the required field `day` is missing."))
      }
      # check the required field `month`
      if (!is.null(input_json$`month`)) {
        stopifnot(R6::is.R6(input_json$`month`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsTrafficTotalsResposne: the required field `month` is missing."))
      }
      # check the required field `year`
      if (!is.null(input_json$`year`)) {
        stopifnot(R6::is.R6(input_json$`year`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsTrafficTotalsResposne: the required field `year` is missing."))
      }
      # check the required field `all`
      if (!is.null(input_json$`all`)) {
        stopifnot(R6::is.R6(input_json$`all`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for VpsTrafficTotalsResposne: the required field `all` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VpsTrafficTotalsResposne
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `day` is null
      if (is.null(self$`day`)) {
        return(FALSE)
      }

      # check if the required `month` is null
      if (is.null(self$`month`)) {
        return(FALSE)
      }

      # check if the required `year` is null
      if (is.null(self$`year`)) {
        return(FALSE)
      }

      # check if the required `all` is null
      if (is.null(self$`all`)) {
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
      # check if the required `day` is null
      if (is.null(self$`day`)) {
        invalid_fields["day"] <- "Non-nullable required field `day` cannot be null."
      }

      # check if the required `month` is null
      if (is.null(self$`month`)) {
        invalid_fields["month"] <- "Non-nullable required field `month` cannot be null."
      }

      # check if the required `year` is null
      if (is.null(self$`year`)) {
        invalid_fields["year"] <- "Non-nullable required field `year` cannot be null."
      }

      # check if the required `all` is null
      if (is.null(self$`all`)) {
        invalid_fields["all"] <- "Non-nullable required field `all` cannot be null."
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
# VpsTrafficTotalsResposne$unlock()
#
## Below is an example to define the print function
# VpsTrafficTotalsResposne$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VpsTrafficTotalsResposne$lock()

