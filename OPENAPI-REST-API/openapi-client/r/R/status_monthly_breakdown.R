#' Create a new StatusMonthlyBreakdown
#'
#' @description
#' Monthly mail delivery status breakdown, showing counts per status category.
#'
#' @docType class
#' @title StatusMonthlyBreakdown
#' @description StatusMonthlyBreakdown Class
#' @format An \code{R6Class} generator object
#' @field default  \link{MonthlyCounts}
#' @field failed  \link{MonthlyCounts}
#' @field rejected  \link{MonthlyCounts}
#' @field pending  \link{MonthlyCounts}
#' @field locked  \link{MonthlyCounts}
#' @field paid  \link{MonthlyCounts}
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
StatusMonthlyBreakdown <- R6::R6Class(
  "StatusMonthlyBreakdown",
  public = list(
    `default` = NULL,
    `failed` = NULL,
    `rejected` = NULL,
    `pending` = NULL,
    `locked` = NULL,
    `paid` = NULL,

    #' @description
    #' Initialize a new StatusMonthlyBreakdown class.
    #'
    #' @param default default
    #' @param failed failed
    #' @param rejected rejected
    #' @param pending pending
    #' @param locked locked
    #' @param paid paid
    #' @param ... Other optional arguments.
    initialize = function(`default`, `failed`, `rejected`, `pending`, `locked`, `paid`, ...) {
      if (!missing(`default`)) {
        stopifnot(R6::is.R6(`default`))
        self$`default` <- `default`
      }
      if (!missing(`failed`)) {
        stopifnot(R6::is.R6(`failed`))
        self$`failed` <- `failed`
      }
      if (!missing(`rejected`)) {
        stopifnot(R6::is.R6(`rejected`))
        self$`rejected` <- `rejected`
      }
      if (!missing(`pending`)) {
        stopifnot(R6::is.R6(`pending`))
        self$`pending` <- `pending`
      }
      if (!missing(`locked`)) {
        stopifnot(R6::is.R6(`locked`))
        self$`locked` <- `locked`
      }
      if (!missing(`paid`)) {
        stopifnot(R6::is.R6(`paid`))
        self$`paid` <- `paid`
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
    #' @return StatusMonthlyBreakdown as a base R list.
    #' @examples
    #' # convert array of StatusMonthlyBreakdown (x) to a data frame
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
    #' Convert StatusMonthlyBreakdown to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      StatusMonthlyBreakdownObject <- list()
      if (!is.null(self$`default`)) {
        StatusMonthlyBreakdownObject[["default"]] <-
          self$extractSimpleType(self$`default`)
      }
      if (!is.null(self$`failed`)) {
        StatusMonthlyBreakdownObject[["failed"]] <-
          self$extractSimpleType(self$`failed`)
      }
      if (!is.null(self$`rejected`)) {
        StatusMonthlyBreakdownObject[["rejected"]] <-
          self$extractSimpleType(self$`rejected`)
      }
      if (!is.null(self$`pending`)) {
        StatusMonthlyBreakdownObject[["pending"]] <-
          self$extractSimpleType(self$`pending`)
      }
      if (!is.null(self$`locked`)) {
        StatusMonthlyBreakdownObject[["locked"]] <-
          self$extractSimpleType(self$`locked`)
      }
      if (!is.null(self$`paid`)) {
        StatusMonthlyBreakdownObject[["paid"]] <-
          self$extractSimpleType(self$`paid`)
      }
      return(StatusMonthlyBreakdownObject)
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
    #' Deserialize JSON string into an instance of StatusMonthlyBreakdown
    #'
    #' @param input_json the JSON input
    #' @return the instance of StatusMonthlyBreakdown
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`default`)) {
        `default_object` <- MonthlyCounts$new()
        `default_object`$fromJSON(jsonlite::toJSON(this_object$`default`, auto_unbox = TRUE, digits = NA))
        self$`default` <- `default_object`
      }
      if (!is.null(this_object$`failed`)) {
        `failed_object` <- MonthlyCounts$new()
        `failed_object`$fromJSON(jsonlite::toJSON(this_object$`failed`, auto_unbox = TRUE, digits = NA))
        self$`failed` <- `failed_object`
      }
      if (!is.null(this_object$`rejected`)) {
        `rejected_object` <- MonthlyCounts$new()
        `rejected_object`$fromJSON(jsonlite::toJSON(this_object$`rejected`, auto_unbox = TRUE, digits = NA))
        self$`rejected` <- `rejected_object`
      }
      if (!is.null(this_object$`pending`)) {
        `pending_object` <- MonthlyCounts$new()
        `pending_object`$fromJSON(jsonlite::toJSON(this_object$`pending`, auto_unbox = TRUE, digits = NA))
        self$`pending` <- `pending_object`
      }
      if (!is.null(this_object$`locked`)) {
        `locked_object` <- MonthlyCounts$new()
        `locked_object`$fromJSON(jsonlite::toJSON(this_object$`locked`, auto_unbox = TRUE, digits = NA))
        self$`locked` <- `locked_object`
      }
      if (!is.null(this_object$`paid`)) {
        `paid_object` <- MonthlyCounts$new()
        `paid_object`$fromJSON(jsonlite::toJSON(this_object$`paid`, auto_unbox = TRUE, digits = NA))
        self$`paid` <- `paid_object`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return StatusMonthlyBreakdown in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of StatusMonthlyBreakdown
    #'
    #' @param input_json the JSON input
    #' @return the instance of StatusMonthlyBreakdown
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`default` <- MonthlyCounts$new()$fromJSON(jsonlite::toJSON(this_object$`default`, auto_unbox = TRUE, digits = NA))
      self$`failed` <- MonthlyCounts$new()$fromJSON(jsonlite::toJSON(this_object$`failed`, auto_unbox = TRUE, digits = NA))
      self$`rejected` <- MonthlyCounts$new()$fromJSON(jsonlite::toJSON(this_object$`rejected`, auto_unbox = TRUE, digits = NA))
      self$`pending` <- MonthlyCounts$new()$fromJSON(jsonlite::toJSON(this_object$`pending`, auto_unbox = TRUE, digits = NA))
      self$`locked` <- MonthlyCounts$new()$fromJSON(jsonlite::toJSON(this_object$`locked`, auto_unbox = TRUE, digits = NA))
      self$`paid` <- MonthlyCounts$new()$fromJSON(jsonlite::toJSON(this_object$`paid`, auto_unbox = TRUE, digits = NA))
      self
    },

    #' @description
    #' Validate JSON input with respect to StatusMonthlyBreakdown and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `default`
      if (!is.null(input_json$`default`)) {
        stopifnot(R6::is.R6(input_json$`default`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for StatusMonthlyBreakdown: the required field `default` is missing."))
      }
      # check the required field `failed`
      if (!is.null(input_json$`failed`)) {
        stopifnot(R6::is.R6(input_json$`failed`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for StatusMonthlyBreakdown: the required field `failed` is missing."))
      }
      # check the required field `rejected`
      if (!is.null(input_json$`rejected`)) {
        stopifnot(R6::is.R6(input_json$`rejected`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for StatusMonthlyBreakdown: the required field `rejected` is missing."))
      }
      # check the required field `pending`
      if (!is.null(input_json$`pending`)) {
        stopifnot(R6::is.R6(input_json$`pending`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for StatusMonthlyBreakdown: the required field `pending` is missing."))
      }
      # check the required field `locked`
      if (!is.null(input_json$`locked`)) {
        stopifnot(R6::is.R6(input_json$`locked`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for StatusMonthlyBreakdown: the required field `locked` is missing."))
      }
      # check the required field `paid`
      if (!is.null(input_json$`paid`)) {
        stopifnot(R6::is.R6(input_json$`paid`))
      } else {
        stop(paste("The JSON input `", input, "` is invalid for StatusMonthlyBreakdown: the required field `paid` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of StatusMonthlyBreakdown
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `default` is null
      if (is.null(self$`default`)) {
        return(FALSE)
      }

      # check if the required `failed` is null
      if (is.null(self$`failed`)) {
        return(FALSE)
      }

      # check if the required `rejected` is null
      if (is.null(self$`rejected`)) {
        return(FALSE)
      }

      # check if the required `pending` is null
      if (is.null(self$`pending`)) {
        return(FALSE)
      }

      # check if the required `locked` is null
      if (is.null(self$`locked`)) {
        return(FALSE)
      }

      # check if the required `paid` is null
      if (is.null(self$`paid`)) {
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
      # check if the required `default` is null
      if (is.null(self$`default`)) {
        invalid_fields["default"] <- "Non-nullable required field `default` cannot be null."
      }

      # check if the required `failed` is null
      if (is.null(self$`failed`)) {
        invalid_fields["failed"] <- "Non-nullable required field `failed` cannot be null."
      }

      # check if the required `rejected` is null
      if (is.null(self$`rejected`)) {
        invalid_fields["rejected"] <- "Non-nullable required field `rejected` cannot be null."
      }

      # check if the required `pending` is null
      if (is.null(self$`pending`)) {
        invalid_fields["pending"] <- "Non-nullable required field `pending` cannot be null."
      }

      # check if the required `locked` is null
      if (is.null(self$`locked`)) {
        invalid_fields["locked"] <- "Non-nullable required field `locked` cannot be null."
      }

      # check if the required `paid` is null
      if (is.null(self$`paid`)) {
        invalid_fields["paid"] <- "Non-nullable required field `paid` cannot be null."
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
# StatusMonthlyBreakdown$unlock()
#
## Below is an example to define the print function
# StatusMonthlyBreakdown$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# StatusMonthlyBreakdown$lock()

