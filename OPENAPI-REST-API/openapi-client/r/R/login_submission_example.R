#' Create a new LoginSubmissionExample
#'
#' @description
#' The data to submit in the login request.
#'
#' @docType class
#' @title LoginSubmissionExample
#' @description LoginSubmissionExample Class
#' @format An \code{R6Class} generator object
#' @field login  character
#' @field passwd  character
#' @field remember  character [optional]
#' @field g-recaptcha-response  \link{LoginSubmissionExampleGRecaptchaResponse} [optional]
#' @field tfa Two Factor Authentication Response. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
LoginSubmissionExample <- R6::R6Class(
  "LoginSubmissionExample",
  public = list(
    `login` = NULL,
    `passwd` = NULL,
    `remember` = NULL,
    `g-recaptcha-response` = NULL,
    `tfa` = NULL,

    #' @description
    #' Initialize a new LoginSubmissionExample class.
    #'
    #' @param login login
    #' @param passwd passwd
    #' @param remember remember
    #' @param g-recaptcha-response g-recaptcha-response
    #' @param tfa Two Factor Authentication Response.
    #' @param ... Other optional arguments.
    initialize = function(`login`, `passwd`, `remember` = NULL, `g-recaptcha-response` = NULL, `tfa` = NULL, ...) {
      if (!missing(`login`)) {
        if (!(is.character(`login`) && length(`login`) == 1)) {
          stop(paste("Error! Invalid data for `login`. Must be a string:", `login`))
        }
        self$`login` <- `login`
      }
      if (!missing(`passwd`)) {
        if (!(is.character(`passwd`) && length(`passwd`) == 1)) {
          stop(paste("Error! Invalid data for `passwd`. Must be a string:", `passwd`))
        }
        self$`passwd` <- `passwd`
      }
      if (!is.null(`remember`)) {
        if (!(is.character(`remember`) && length(`remember`) == 1)) {
          stop(paste("Error! Invalid data for `remember`. Must be a string:", `remember`))
        }
        self$`remember` <- `remember`
      }
      if (!is.null(`g-recaptcha-response`)) {
        stopifnot(R6::is.R6(`g-recaptcha-response`))
        self$`g-recaptcha-response` <- `g-recaptcha-response`
      }
      if (!is.null(`tfa`)) {
        if (!(is.character(`tfa`) && length(`tfa`) == 1)) {
          stop(paste("Error! Invalid data for `tfa`. Must be a string:", `tfa`))
        }
        self$`tfa` <- `tfa`
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
    #' @return LoginSubmissionExample as a base R list.
    #' @examples
    #' # convert array of LoginSubmissionExample (x) to a data frame
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
    #' Convert LoginSubmissionExample to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      LoginSubmissionExampleObject <- list()
      if (!is.null(self$`login`)) {
        LoginSubmissionExampleObject[["login"]] <-
          self$`login`
      }
      if (!is.null(self$`passwd`)) {
        LoginSubmissionExampleObject[["passwd"]] <-
          self$`passwd`
      }
      if (!is.null(self$`remember`)) {
        LoginSubmissionExampleObject[["remember"]] <-
          self$`remember`
      }
      if (!is.null(self$`g-recaptcha-response`)) {
        LoginSubmissionExampleObject[["g-recaptcha-response"]] <-
          self$extractSimpleType(self$`g-recaptcha-response`)
      }
      if (!is.null(self$`tfa`)) {
        LoginSubmissionExampleObject[["tfa"]] <-
          self$`tfa`
      }
      return(LoginSubmissionExampleObject)
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
    #' Deserialize JSON string into an instance of LoginSubmissionExample
    #'
    #' @param input_json the JSON input
    #' @return the instance of LoginSubmissionExample
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`login`)) {
        self$`login` <- this_object$`login`
      }
      if (!is.null(this_object$`passwd`)) {
        self$`passwd` <- this_object$`passwd`
      }
      if (!is.null(this_object$`remember`)) {
        self$`remember` <- this_object$`remember`
      }
      if (!is.null(this_object$`g-recaptcha-response`)) {
        `g-recaptcha-response_object` <- LoginSubmissionExampleGRecaptchaResponse$new()
        `g-recaptcha-response_object`$fromJSON(jsonlite::toJSON(this_object$`g-recaptcha-response`, auto_unbox = TRUE, digits = NA))
        self$`g-recaptcha-response` <- `g-recaptcha-response_object`
      }
      if (!is.null(this_object$`tfa`)) {
        self$`tfa` <- this_object$`tfa`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return LoginSubmissionExample in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of LoginSubmissionExample
    #'
    #' @param input_json the JSON input
    #' @return the instance of LoginSubmissionExample
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`login` <- this_object$`login`
      self$`passwd` <- this_object$`passwd`
      self$`remember` <- this_object$`remember`
      self$`g-recaptcha-response` <- LoginSubmissionExampleGRecaptchaResponse$new()$fromJSON(jsonlite::toJSON(this_object$`g-recaptcha-response`, auto_unbox = TRUE, digits = NA))
      self$`tfa` <- this_object$`tfa`
      self
    },

    #' @description
    #' Validate JSON input with respect to LoginSubmissionExample and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
      # check the required field `login`
      if (!is.null(input_json$`login`)) {
        if (!(is.character(input_json$`login`) && length(input_json$`login`) == 1)) {
          stop(paste("Error! Invalid data for `login`. Must be a string:", input_json$`login`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for LoginSubmissionExample: the required field `login` is missing."))
      }
      # check the required field `passwd`
      if (!is.null(input_json$`passwd`)) {
        if (!(is.character(input_json$`passwd`) && length(input_json$`passwd`) == 1)) {
          stop(paste("Error! Invalid data for `passwd`. Must be a string:", input_json$`passwd`))
        }
      } else {
        stop(paste("The JSON input `", input, "` is invalid for LoginSubmissionExample: the required field `passwd` is missing."))
      }
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of LoginSubmissionExample
    toString = function() {
      self$toJSONString()
    },

    #' @description
    #' Return true if the values in all fields are valid.
    #'
    #' @return true if the values in all fields are valid.
    isValid = function() {
      # check if the required `login` is null
      if (is.null(self$`login`)) {
        return(FALSE)
      }

      # check if the required `passwd` is null
      if (is.null(self$`passwd`)) {
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
      # check if the required `login` is null
      if (is.null(self$`login`)) {
        invalid_fields["login"] <- "Non-nullable required field `login` cannot be null."
      }

      # check if the required `passwd` is null
      if (is.null(self$`passwd`)) {
        invalid_fields["passwd"] <- "Non-nullable required field `passwd` cannot be null."
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
# LoginSubmissionExample$unlock()
#
## Below is an example to define the print function
# LoginSubmissionExample$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# LoginSubmissionExample$lock()

