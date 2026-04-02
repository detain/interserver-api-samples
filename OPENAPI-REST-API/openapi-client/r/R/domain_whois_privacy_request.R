#' Create a new DomainWhoisPrivacyRequest
#'
#' @description
#' Request payload for enabling or disabling Whois privacy.
#'
#' @docType class
#' @title DomainWhoisPrivacyRequest
#' @description DomainWhoisPrivacyRequest Class
#' @format An \code{R6Class} generator object
#' @field func Action to perform (enable or disableCancel). character [optional]
#' @field csrf_token CSRF token if the API requires it for the account. character [optional]
#' @field domain_firstname  character [optional]
#' @field domain_lastname  character [optional]
#' @field domain_email  character [optional]
#' @field domain_address  character [optional]
#' @field domain_address2  character [optional]
#' @field domain_address3  character [optional]
#' @field domain_city  character [optional]
#' @field domain_state  character [optional]
#' @field domain_zip  character [optional]
#' @field domain_country  character [optional]
#' @field domain_phone  character [optional]
#' @field domain_fax  character [optional]
#' @field domain_company  character [optional]
#' @field domain_extra  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DomainWhoisPrivacyRequest <- R6::R6Class(
  "DomainWhoisPrivacyRequest",
  public = list(
    `func` = NULL,
    `csrf_token` = NULL,
    `domain_firstname` = NULL,
    `domain_lastname` = NULL,
    `domain_email` = NULL,
    `domain_address` = NULL,
    `domain_address2` = NULL,
    `domain_address3` = NULL,
    `domain_city` = NULL,
    `domain_state` = NULL,
    `domain_zip` = NULL,
    `domain_country` = NULL,
    `domain_phone` = NULL,
    `domain_fax` = NULL,
    `domain_company` = NULL,
    `domain_extra` = NULL,

    #' @description
    #' Initialize a new DomainWhoisPrivacyRequest class.
    #'
    #' @param func Action to perform (enable or disableCancel).
    #' @param csrf_token CSRF token if the API requires it for the account.
    #' @param domain_firstname domain_firstname
    #' @param domain_lastname domain_lastname
    #' @param domain_email domain_email
    #' @param domain_address domain_address
    #' @param domain_address2 domain_address2
    #' @param domain_address3 domain_address3
    #' @param domain_city domain_city
    #' @param domain_state domain_state
    #' @param domain_zip domain_zip
    #' @param domain_country domain_country
    #' @param domain_phone domain_phone
    #' @param domain_fax domain_fax
    #' @param domain_company domain_company
    #' @param domain_extra domain_extra
    #' @param ... Other optional arguments.
    initialize = function(`func` = NULL, `csrf_token` = NULL, `domain_firstname` = NULL, `domain_lastname` = NULL, `domain_email` = NULL, `domain_address` = NULL, `domain_address2` = NULL, `domain_address3` = NULL, `domain_city` = NULL, `domain_state` = NULL, `domain_zip` = NULL, `domain_country` = NULL, `domain_phone` = NULL, `domain_fax` = NULL, `domain_company` = NULL, `domain_extra` = NULL, ...) {
      if (!is.null(`func`)) {
        if (!(is.character(`func`) && length(`func`) == 1)) {
          stop(paste("Error! Invalid data for `func`. Must be a string:", `func`))
        }
        self$`func` <- `func`
      }
      if (!is.null(`csrf_token`)) {
        if (!(is.character(`csrf_token`) && length(`csrf_token`) == 1)) {
          stop(paste("Error! Invalid data for `csrf_token`. Must be a string:", `csrf_token`))
        }
        self$`csrf_token` <- `csrf_token`
      }
      if (!is.null(`domain_firstname`)) {
        if (!(is.character(`domain_firstname`) && length(`domain_firstname`) == 1)) {
          stop(paste("Error! Invalid data for `domain_firstname`. Must be a string:", `domain_firstname`))
        }
        self$`domain_firstname` <- `domain_firstname`
      }
      if (!is.null(`domain_lastname`)) {
        if (!(is.character(`domain_lastname`) && length(`domain_lastname`) == 1)) {
          stop(paste("Error! Invalid data for `domain_lastname`. Must be a string:", `domain_lastname`))
        }
        self$`domain_lastname` <- `domain_lastname`
      }
      if (!is.null(`domain_email`)) {
        if (!(is.character(`domain_email`) && length(`domain_email`) == 1)) {
          stop(paste("Error! Invalid data for `domain_email`. Must be a string:", `domain_email`))
        }
        self$`domain_email` <- `domain_email`
      }
      if (!is.null(`domain_address`)) {
        if (!(is.character(`domain_address`) && length(`domain_address`) == 1)) {
          stop(paste("Error! Invalid data for `domain_address`. Must be a string:", `domain_address`))
        }
        self$`domain_address` <- `domain_address`
      }
      if (!is.null(`domain_address2`)) {
        if (!(is.character(`domain_address2`) && length(`domain_address2`) == 1)) {
          stop(paste("Error! Invalid data for `domain_address2`. Must be a string:", `domain_address2`))
        }
        self$`domain_address2` <- `domain_address2`
      }
      if (!is.null(`domain_address3`)) {
        if (!(is.character(`domain_address3`) && length(`domain_address3`) == 1)) {
          stop(paste("Error! Invalid data for `domain_address3`. Must be a string:", `domain_address3`))
        }
        self$`domain_address3` <- `domain_address3`
      }
      if (!is.null(`domain_city`)) {
        if (!(is.character(`domain_city`) && length(`domain_city`) == 1)) {
          stop(paste("Error! Invalid data for `domain_city`. Must be a string:", `domain_city`))
        }
        self$`domain_city` <- `domain_city`
      }
      if (!is.null(`domain_state`)) {
        if (!(is.character(`domain_state`) && length(`domain_state`) == 1)) {
          stop(paste("Error! Invalid data for `domain_state`. Must be a string:", `domain_state`))
        }
        self$`domain_state` <- `domain_state`
      }
      if (!is.null(`domain_zip`)) {
        if (!(is.character(`domain_zip`) && length(`domain_zip`) == 1)) {
          stop(paste("Error! Invalid data for `domain_zip`. Must be a string:", `domain_zip`))
        }
        self$`domain_zip` <- `domain_zip`
      }
      if (!is.null(`domain_country`)) {
        if (!(is.character(`domain_country`) && length(`domain_country`) == 1)) {
          stop(paste("Error! Invalid data for `domain_country`. Must be a string:", `domain_country`))
        }
        self$`domain_country` <- `domain_country`
      }
      if (!is.null(`domain_phone`)) {
        if (!(is.character(`domain_phone`) && length(`domain_phone`) == 1)) {
          stop(paste("Error! Invalid data for `domain_phone`. Must be a string:", `domain_phone`))
        }
        self$`domain_phone` <- `domain_phone`
      }
      if (!is.null(`domain_fax`)) {
        if (!(is.character(`domain_fax`) && length(`domain_fax`) == 1)) {
          stop(paste("Error! Invalid data for `domain_fax`. Must be a string:", `domain_fax`))
        }
        self$`domain_fax` <- `domain_fax`
      }
      if (!is.null(`domain_company`)) {
        if (!(is.character(`domain_company`) && length(`domain_company`) == 1)) {
          stop(paste("Error! Invalid data for `domain_company`. Must be a string:", `domain_company`))
        }
        self$`domain_company` <- `domain_company`
      }
      if (!is.null(`domain_extra`)) {
        if (!(is.character(`domain_extra`) && length(`domain_extra`) == 1)) {
          stop(paste("Error! Invalid data for `domain_extra`. Must be a string:", `domain_extra`))
        }
        self$`domain_extra` <- `domain_extra`
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
    #' @return DomainWhoisPrivacyRequest as a base R list.
    #' @examples
    #' # convert array of DomainWhoisPrivacyRequest (x) to a data frame
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
    #' Convert DomainWhoisPrivacyRequest to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      DomainWhoisPrivacyRequestObject <- list()
      if (!is.null(self$`func`)) {
        DomainWhoisPrivacyRequestObject[["func"]] <-
          self$`func`
      }
      if (!is.null(self$`csrf_token`)) {
        DomainWhoisPrivacyRequestObject[["csrf_token"]] <-
          self$`csrf_token`
      }
      if (!is.null(self$`domain_firstname`)) {
        DomainWhoisPrivacyRequestObject[["domain_firstname"]] <-
          self$`domain_firstname`
      }
      if (!is.null(self$`domain_lastname`)) {
        DomainWhoisPrivacyRequestObject[["domain_lastname"]] <-
          self$`domain_lastname`
      }
      if (!is.null(self$`domain_email`)) {
        DomainWhoisPrivacyRequestObject[["domain_email"]] <-
          self$`domain_email`
      }
      if (!is.null(self$`domain_address`)) {
        DomainWhoisPrivacyRequestObject[["domain_address"]] <-
          self$`domain_address`
      }
      if (!is.null(self$`domain_address2`)) {
        DomainWhoisPrivacyRequestObject[["domain_address2"]] <-
          self$`domain_address2`
      }
      if (!is.null(self$`domain_address3`)) {
        DomainWhoisPrivacyRequestObject[["domain_address3"]] <-
          self$`domain_address3`
      }
      if (!is.null(self$`domain_city`)) {
        DomainWhoisPrivacyRequestObject[["domain_city"]] <-
          self$`domain_city`
      }
      if (!is.null(self$`domain_state`)) {
        DomainWhoisPrivacyRequestObject[["domain_state"]] <-
          self$`domain_state`
      }
      if (!is.null(self$`domain_zip`)) {
        DomainWhoisPrivacyRequestObject[["domain_zip"]] <-
          self$`domain_zip`
      }
      if (!is.null(self$`domain_country`)) {
        DomainWhoisPrivacyRequestObject[["domain_country"]] <-
          self$`domain_country`
      }
      if (!is.null(self$`domain_phone`)) {
        DomainWhoisPrivacyRequestObject[["domain_phone"]] <-
          self$`domain_phone`
      }
      if (!is.null(self$`domain_fax`)) {
        DomainWhoisPrivacyRequestObject[["domain_fax"]] <-
          self$`domain_fax`
      }
      if (!is.null(self$`domain_company`)) {
        DomainWhoisPrivacyRequestObject[["domain_company"]] <-
          self$`domain_company`
      }
      if (!is.null(self$`domain_extra`)) {
        DomainWhoisPrivacyRequestObject[["domain_extra"]] <-
          self$`domain_extra`
      }
      return(DomainWhoisPrivacyRequestObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainWhoisPrivacyRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainWhoisPrivacyRequest
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`func`)) {
        self$`func` <- this_object$`func`
      }
      if (!is.null(this_object$`csrf_token`)) {
        self$`csrf_token` <- this_object$`csrf_token`
      }
      if (!is.null(this_object$`domain_firstname`)) {
        self$`domain_firstname` <- this_object$`domain_firstname`
      }
      if (!is.null(this_object$`domain_lastname`)) {
        self$`domain_lastname` <- this_object$`domain_lastname`
      }
      if (!is.null(this_object$`domain_email`)) {
        self$`domain_email` <- this_object$`domain_email`
      }
      if (!is.null(this_object$`domain_address`)) {
        self$`domain_address` <- this_object$`domain_address`
      }
      if (!is.null(this_object$`domain_address2`)) {
        self$`domain_address2` <- this_object$`domain_address2`
      }
      if (!is.null(this_object$`domain_address3`)) {
        self$`domain_address3` <- this_object$`domain_address3`
      }
      if (!is.null(this_object$`domain_city`)) {
        self$`domain_city` <- this_object$`domain_city`
      }
      if (!is.null(this_object$`domain_state`)) {
        self$`domain_state` <- this_object$`domain_state`
      }
      if (!is.null(this_object$`domain_zip`)) {
        self$`domain_zip` <- this_object$`domain_zip`
      }
      if (!is.null(this_object$`domain_country`)) {
        self$`domain_country` <- this_object$`domain_country`
      }
      if (!is.null(this_object$`domain_phone`)) {
        self$`domain_phone` <- this_object$`domain_phone`
      }
      if (!is.null(this_object$`domain_fax`)) {
        self$`domain_fax` <- this_object$`domain_fax`
      }
      if (!is.null(this_object$`domain_company`)) {
        self$`domain_company` <- this_object$`domain_company`
      }
      if (!is.null(this_object$`domain_extra`)) {
        self$`domain_extra` <- this_object$`domain_extra`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return DomainWhoisPrivacyRequest in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainWhoisPrivacyRequest
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainWhoisPrivacyRequest
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`func` <- this_object$`func`
      self$`csrf_token` <- this_object$`csrf_token`
      self$`domain_firstname` <- this_object$`domain_firstname`
      self$`domain_lastname` <- this_object$`domain_lastname`
      self$`domain_email` <- this_object$`domain_email`
      self$`domain_address` <- this_object$`domain_address`
      self$`domain_address2` <- this_object$`domain_address2`
      self$`domain_address3` <- this_object$`domain_address3`
      self$`domain_city` <- this_object$`domain_city`
      self$`domain_state` <- this_object$`domain_state`
      self$`domain_zip` <- this_object$`domain_zip`
      self$`domain_country` <- this_object$`domain_country`
      self$`domain_phone` <- this_object$`domain_phone`
      self$`domain_fax` <- this_object$`domain_fax`
      self$`domain_company` <- this_object$`domain_company`
      self$`domain_extra` <- this_object$`domain_extra`
      self
    },

    #' @description
    #' Validate JSON input with respect to DomainWhoisPrivacyRequest and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of DomainWhoisPrivacyRequest
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
# DomainWhoisPrivacyRequest$unlock()
#
## Below is an example to define the print function
# DomainWhoisPrivacyRequest$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# DomainWhoisPrivacyRequest$lock()

