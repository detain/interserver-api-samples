#' Create a new DomainOwnerContact
#'
#' @description
#' Contact details for the registered domain owner.
#'
#' @docType class
#' @title DomainOwnerContact
#' @description DomainOwnerContact Class
#' @format An \code{R6Class} generator object
#' @field postal_code  character [optional]
#' @field org_name  character [optional]
#' @field country  character [optional]
#' @field status  character [optional]
#' @field state  character [optional]
#' @field first_name  character [optional]
#' @field last_name  character [optional]
#' @field address3  character [optional]
#' @field fax  character [optional]
#' @field address2  character [optional]
#' @field email  character [optional]
#' @field city  character [optional]
#' @field phone  character [optional]
#' @field address1  character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DomainOwnerContact <- R6::R6Class(
  "DomainOwnerContact",
  public = list(
    `postal_code` = NULL,
    `org_name` = NULL,
    `country` = NULL,
    `status` = NULL,
    `state` = NULL,
    `first_name` = NULL,
    `last_name` = NULL,
    `address3` = NULL,
    `fax` = NULL,
    `address2` = NULL,
    `email` = NULL,
    `city` = NULL,
    `phone` = NULL,
    `address1` = NULL,

    #' @description
    #' Initialize a new DomainOwnerContact class.
    #'
    #' @param postal_code postal_code
    #' @param org_name org_name
    #' @param country country
    #' @param status status
    #' @param state state
    #' @param first_name first_name
    #' @param last_name last_name
    #' @param address3 address3
    #' @param fax fax
    #' @param address2 address2
    #' @param email email
    #' @param city city
    #' @param phone phone
    #' @param address1 address1
    #' @param ... Other optional arguments.
    initialize = function(`postal_code` = NULL, `org_name` = NULL, `country` = NULL, `status` = NULL, `state` = NULL, `first_name` = NULL, `last_name` = NULL, `address3` = NULL, `fax` = NULL, `address2` = NULL, `email` = NULL, `city` = NULL, `phone` = NULL, `address1` = NULL, ...) {
      if (!is.null(`postal_code`)) {
        if (!(is.character(`postal_code`) && length(`postal_code`) == 1)) {
          stop(paste("Error! Invalid data for `postal_code`. Must be a string:", `postal_code`))
        }
        self$`postal_code` <- `postal_code`
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
      if (!is.null(`address3`)) {
        if (!(is.character(`address3`) && length(`address3`) == 1)) {
          stop(paste("Error! Invalid data for `address3`. Must be a string:", `address3`))
        }
        self$`address3` <- `address3`
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
      if (!is.null(`email`)) {
        if (!(is.character(`email`) && length(`email`) == 1)) {
          stop(paste("Error! Invalid data for `email`. Must be a string:", `email`))
        }
        self$`email` <- `email`
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
      if (!is.null(`address1`)) {
        if (!(is.character(`address1`) && length(`address1`) == 1)) {
          stop(paste("Error! Invalid data for `address1`. Must be a string:", `address1`))
        }
        self$`address1` <- `address1`
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
    #' @return DomainOwnerContact as a base R list.
    #' @examples
    #' # convert array of DomainOwnerContact (x) to a data frame
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
    #' Convert DomainOwnerContact to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      DomainOwnerContactObject <- list()
      if (!is.null(self$`postal_code`)) {
        DomainOwnerContactObject[["postal_code"]] <-
          self$`postal_code`
      }
      if (!is.null(self$`org_name`)) {
        DomainOwnerContactObject[["org_name"]] <-
          self$`org_name`
      }
      if (!is.null(self$`country`)) {
        DomainOwnerContactObject[["country"]] <-
          self$`country`
      }
      if (!is.null(self$`status`)) {
        DomainOwnerContactObject[["status"]] <-
          self$`status`
      }
      if (!is.null(self$`state`)) {
        DomainOwnerContactObject[["state"]] <-
          self$`state`
      }
      if (!is.null(self$`first_name`)) {
        DomainOwnerContactObject[["first_name"]] <-
          self$`first_name`
      }
      if (!is.null(self$`last_name`)) {
        DomainOwnerContactObject[["last_name"]] <-
          self$`last_name`
      }
      if (!is.null(self$`address3`)) {
        DomainOwnerContactObject[["address3"]] <-
          self$`address3`
      }
      if (!is.null(self$`fax`)) {
        DomainOwnerContactObject[["fax"]] <-
          self$`fax`
      }
      if (!is.null(self$`address2`)) {
        DomainOwnerContactObject[["address2"]] <-
          self$`address2`
      }
      if (!is.null(self$`email`)) {
        DomainOwnerContactObject[["email"]] <-
          self$`email`
      }
      if (!is.null(self$`city`)) {
        DomainOwnerContactObject[["city"]] <-
          self$`city`
      }
      if (!is.null(self$`phone`)) {
        DomainOwnerContactObject[["phone"]] <-
          self$`phone`
      }
      if (!is.null(self$`address1`)) {
        DomainOwnerContactObject[["address1"]] <-
          self$`address1`
      }
      return(DomainOwnerContactObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainOwnerContact
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainOwnerContact
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`postal_code`)) {
        self$`postal_code` <- this_object$`postal_code`
      }
      if (!is.null(this_object$`org_name`)) {
        self$`org_name` <- this_object$`org_name`
      }
      if (!is.null(this_object$`country`)) {
        self$`country` <- this_object$`country`
      }
      if (!is.null(this_object$`status`)) {
        self$`status` <- this_object$`status`
      }
      if (!is.null(this_object$`state`)) {
        self$`state` <- this_object$`state`
      }
      if (!is.null(this_object$`first_name`)) {
        self$`first_name` <- this_object$`first_name`
      }
      if (!is.null(this_object$`last_name`)) {
        self$`last_name` <- this_object$`last_name`
      }
      if (!is.null(this_object$`address3`)) {
        self$`address3` <- this_object$`address3`
      }
      if (!is.null(this_object$`fax`)) {
        self$`fax` <- this_object$`fax`
      }
      if (!is.null(this_object$`address2`)) {
        self$`address2` <- this_object$`address2`
      }
      if (!is.null(this_object$`email`)) {
        self$`email` <- this_object$`email`
      }
      if (!is.null(this_object$`city`)) {
        self$`city` <- this_object$`city`
      }
      if (!is.null(this_object$`phone`)) {
        self$`phone` <- this_object$`phone`
      }
      if (!is.null(this_object$`address1`)) {
        self$`address1` <- this_object$`address1`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return DomainOwnerContact in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainOwnerContact
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainOwnerContact
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`postal_code` <- this_object$`postal_code`
      self$`org_name` <- this_object$`org_name`
      self$`country` <- this_object$`country`
      self$`status` <- this_object$`status`
      self$`state` <- this_object$`state`
      self$`first_name` <- this_object$`first_name`
      self$`last_name` <- this_object$`last_name`
      self$`address3` <- this_object$`address3`
      self$`fax` <- this_object$`fax`
      self$`address2` <- this_object$`address2`
      self$`email` <- this_object$`email`
      self$`city` <- this_object$`city`
      self$`phone` <- this_object$`phone`
      self$`address1` <- this_object$`address1`
      self
    },

    #' @description
    #' Validate JSON input with respect to DomainOwnerContact and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of DomainOwnerContact
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
# DomainOwnerContact$unlock()
#
## Below is an example to define the print function
# DomainOwnerContact$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# DomainOwnerContact$lock()

