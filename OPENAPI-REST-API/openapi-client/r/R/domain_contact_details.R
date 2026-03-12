#' Create a new DomainContactDetails
#'
#' @description
#' Contact details used for domain registrant/admin/technical/billing records.
#'
#' @docType class
#' @title DomainContactDetails
#' @description DomainContactDetails Class
#' @format An \code{R6Class} generator object
#' @field status Contact status reported by the registrar. character [optional]
#' @field state State or region for the contact address. character [optional]
#' @field org_name Organization name for the contact. character [optional]
#' @field country Two-letter country code for the contact. character [optional]
#' @field postal_code Postal or ZIP code for the contact address. character [optional]
#' @field email Email address for the contact. character [optional]
#' @field fax Fax number for the contact, if available. character [optional]
#' @field address2 Secondary street address line. character [optional]
#' @field address3 Tertiary street address line. character [optional]
#' @field address1 Primary street address line. character [optional]
#' @field city City for the contact address. character [optional]
#' @field phone Phone number for the contact. character [optional]
#' @field first_name First name for the contact. character [optional]
#' @field last_name Last name for the contact. character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DomainContactDetails <- R6::R6Class(
  "DomainContactDetails",
  public = list(
    `status` = NULL,
    `state` = NULL,
    `org_name` = NULL,
    `country` = NULL,
    `postal_code` = NULL,
    `email` = NULL,
    `fax` = NULL,
    `address2` = NULL,
    `address3` = NULL,
    `address1` = NULL,
    `city` = NULL,
    `phone` = NULL,
    `first_name` = NULL,
    `last_name` = NULL,

    #' @description
    #' Initialize a new DomainContactDetails class.
    #'
    #' @param status Contact status reported by the registrar.
    #' @param state State or region for the contact address.
    #' @param org_name Organization name for the contact.
    #' @param country Two-letter country code for the contact.
    #' @param postal_code Postal or ZIP code for the contact address.
    #' @param email Email address for the contact.
    #' @param fax Fax number for the contact, if available.
    #' @param address2 Secondary street address line.
    #' @param address3 Tertiary street address line.
    #' @param address1 Primary street address line.
    #' @param city City for the contact address.
    #' @param phone Phone number for the contact.
    #' @param first_name First name for the contact.
    #' @param last_name Last name for the contact.
    #' @param ... Other optional arguments.
    initialize = function(`status` = NULL, `state` = NULL, `org_name` = NULL, `country` = NULL, `postal_code` = NULL, `email` = NULL, `fax` = NULL, `address2` = NULL, `address3` = NULL, `address1` = NULL, `city` = NULL, `phone` = NULL, `first_name` = NULL, `last_name` = NULL, ...) {
      if (!is.null(`status`)) {
        if (!(is.character(`status`) && length(`status`) == 1)) {
          stop(paste("Error! Invalid data for `status`. Must be a string:", `status`))
        }
        self$`status` <- `status`
      }
      if (!is.null(`state`)) {
        if (!(is.character(`state`) && length(`state`) == 1)) {
          stop(paste("Error! Invalid data for `state`. Must be a string:", `state`))
        }
        self$`state` <- `state`
      }
      if (!is.null(`org_name`)) {
        if (!(is.character(`org_name`) && length(`org_name`) == 1)) {
          stop(paste("Error! Invalid data for `org_name`. Must be a string:", `org_name`))
        }
        self$`org_name` <- `org_name`
      }
      if (!is.null(`country`)) {
        if (!(is.character(`country`) && length(`country`) == 1)) {
          stop(paste("Error! Invalid data for `country`. Must be a string:", `country`))
        }
        self$`country` <- `country`
      }
      if (!is.null(`postal_code`)) {
        if (!(is.character(`postal_code`) && length(`postal_code`) == 1)) {
          stop(paste("Error! Invalid data for `postal_code`. Must be a string:", `postal_code`))
        }
        self$`postal_code` <- `postal_code`
      }
      if (!is.null(`email`)) {
        if (!(is.character(`email`) && length(`email`) == 1)) {
          stop(paste("Error! Invalid data for `email`. Must be a string:", `email`))
        }
        self$`email` <- `email`
      }
      if (!is.null(`fax`)) {
        if (!(is.character(`fax`) && length(`fax`) == 1)) {
          stop(paste("Error! Invalid data for `fax`. Must be a string:", `fax`))
        }
        self$`fax` <- `fax`
      }
      if (!is.null(`address2`)) {
        if (!(is.character(`address2`) && length(`address2`) == 1)) {
          stop(paste("Error! Invalid data for `address2`. Must be a string:", `address2`))
        }
        self$`address2` <- `address2`
      }
      if (!is.null(`address3`)) {
        if (!(is.character(`address3`) && length(`address3`) == 1)) {
          stop(paste("Error! Invalid data for `address3`. Must be a string:", `address3`))
        }
        self$`address3` <- `address3`
      }
      if (!is.null(`address1`)) {
        if (!(is.character(`address1`) && length(`address1`) == 1)) {
          stop(paste("Error! Invalid data for `address1`. Must be a string:", `address1`))
        }
        self$`address1` <- `address1`
      }
      if (!is.null(`city`)) {
        if (!(is.character(`city`) && length(`city`) == 1)) {
          stop(paste("Error! Invalid data for `city`. Must be a string:", `city`))
        }
        self$`city` <- `city`
      }
      if (!is.null(`phone`)) {
        if (!(is.character(`phone`) && length(`phone`) == 1)) {
          stop(paste("Error! Invalid data for `phone`. Must be a string:", `phone`))
        }
        self$`phone` <- `phone`
      }
      if (!is.null(`first_name`)) {
        if (!(is.character(`first_name`) && length(`first_name`) == 1)) {
          stop(paste("Error! Invalid data for `first_name`. Must be a string:", `first_name`))
        }
        self$`first_name` <- `first_name`
      }
      if (!is.null(`last_name`)) {
        if (!(is.character(`last_name`) && length(`last_name`) == 1)) {
          stop(paste("Error! Invalid data for `last_name`. Must be a string:", `last_name`))
        }
        self$`last_name` <- `last_name`
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
    #' @return DomainContactDetails as a base R list.
    #' @examples
    #' # convert array of DomainContactDetails (x) to a data frame
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
    #' Convert DomainContactDetails to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      DomainContactDetailsObject <- list()
      if (!is.null(self$`status`)) {
        DomainContactDetailsObject[["status"]] <-
          self$`status`
      }
      if (!is.null(self$`state`)) {
        DomainContactDetailsObject[["state"]] <-
          self$`state`
      }
      if (!is.null(self$`org_name`)) {
        DomainContactDetailsObject[["org_name"]] <-
          self$`org_name`
      }
      if (!is.null(self$`country`)) {
        DomainContactDetailsObject[["country"]] <-
          self$`country`
      }
      if (!is.null(self$`postal_code`)) {
        DomainContactDetailsObject[["postal_code"]] <-
          self$`postal_code`
      }
      if (!is.null(self$`email`)) {
        DomainContactDetailsObject[["email"]] <-
          self$`email`
      }
      if (!is.null(self$`fax`)) {
        DomainContactDetailsObject[["fax"]] <-
          self$`fax`
      }
      if (!is.null(self$`address2`)) {
        DomainContactDetailsObject[["address2"]] <-
          self$`address2`
      }
      if (!is.null(self$`address3`)) {
        DomainContactDetailsObject[["address3"]] <-
          self$`address3`
      }
      if (!is.null(self$`address1`)) {
        DomainContactDetailsObject[["address1"]] <-
          self$`address1`
      }
      if (!is.null(self$`city`)) {
        DomainContactDetailsObject[["city"]] <-
          self$`city`
      }
      if (!is.null(self$`phone`)) {
        DomainContactDetailsObject[["phone"]] <-
          self$`phone`
      }
      if (!is.null(self$`first_name`)) {
        DomainContactDetailsObject[["first_name"]] <-
          self$`first_name`
      }
      if (!is.null(self$`last_name`)) {
        DomainContactDetailsObject[["last_name"]] <-
          self$`last_name`
      }
      return(DomainContactDetailsObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainContactDetails
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainContactDetails
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`status`)) {
        self$`status` <- this_object$`status`
      }
      if (!is.null(this_object$`state`)) {
        self$`state` <- this_object$`state`
      }
      if (!is.null(this_object$`org_name`)) {
        self$`org_name` <- this_object$`org_name`
      }
      if (!is.null(this_object$`country`)) {
        self$`country` <- this_object$`country`
      }
      if (!is.null(this_object$`postal_code`)) {
        self$`postal_code` <- this_object$`postal_code`
      }
      if (!is.null(this_object$`email`)) {
        self$`email` <- this_object$`email`
      }
      if (!is.null(this_object$`fax`)) {
        self$`fax` <- this_object$`fax`
      }
      if (!is.null(this_object$`address2`)) {
        self$`address2` <- this_object$`address2`
      }
      if (!is.null(this_object$`address3`)) {
        self$`address3` <- this_object$`address3`
      }
      if (!is.null(this_object$`address1`)) {
        self$`address1` <- this_object$`address1`
      }
      if (!is.null(this_object$`city`)) {
        self$`city` <- this_object$`city`
      }
      if (!is.null(this_object$`phone`)) {
        self$`phone` <- this_object$`phone`
      }
      if (!is.null(this_object$`first_name`)) {
        self$`first_name` <- this_object$`first_name`
      }
      if (!is.null(this_object$`last_name`)) {
        self$`last_name` <- this_object$`last_name`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return DomainContactDetails in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainContactDetails
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainContactDetails
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`status` <- this_object$`status`
      self$`state` <- this_object$`state`
      self$`org_name` <- this_object$`org_name`
      self$`country` <- this_object$`country`
      self$`postal_code` <- this_object$`postal_code`
      self$`email` <- this_object$`email`
      self$`fax` <- this_object$`fax`
      self$`address2` <- this_object$`address2`
      self$`address3` <- this_object$`address3`
      self$`address1` <- this_object$`address1`
      self$`city` <- this_object$`city`
      self$`phone` <- this_object$`phone`
      self$`first_name` <- this_object$`first_name`
      self$`last_name` <- this_object$`last_name`
      self
    },

    #' @description
    #' Validate JSON input with respect to DomainContactDetails and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of DomainContactDetails
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
# DomainContactDetails$unlock()
#
## Below is an example to define the print function
# DomainContactDetails$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# DomainContactDetails$lock()

