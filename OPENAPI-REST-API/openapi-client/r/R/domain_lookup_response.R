#' Create a new DomainLookupResponse
#'
#' @description
#' Availability, pricing, and order-field metadata for a domain lookup.
#'
#' @docType class
#' @title DomainLookupResponse
#' @description DomainLookupResponse Class
#' @format An \code{R6Class} generator object
#' @field available Whether the domain is available to register. character [optional]
#' @field premium Whether the domain is marked as premium by the registrar. character [optional]
#' @field website Indicates if the domain is already used by a website service. character [optional]
#' @field domain_service Indicates if the domain already exists as a domain service on the account. character [optional]
#' @field service Service catalog details for the domain's TLD. object [optional]
#' @field whois_privacy Whether Whois privacy is available for the TLD. character [optional]
#' @field new Calculated registration price, when available. character [optional]
#' @field renewal Calculated renewal price, when available. character [optional]
#' @field transfer Calculated transfer price, when available. character [optional]
#' @field fields Registrar field requirements for this domain/TLD. object [optional]
#' @field currencies Pricing information normalized to supported currencies. object [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
DomainLookupResponse <- R6::R6Class(
  "DomainLookupResponse",
  public = list(
    `available` = NULL,
    `premium` = NULL,
    `website` = NULL,
    `domain_service` = NULL,
    `service` = NULL,
    `whois_privacy` = NULL,
    `new` = NULL,
    `renewal` = NULL,
    `transfer` = NULL,
    `fields` = NULL,
    `currencies` = NULL,

    #' @description
    #' Initialize a new DomainLookupResponse class.
    #'
    #' @param available Whether the domain is available to register.
    #' @param premium Whether the domain is marked as premium by the registrar.
    #' @param website Indicates if the domain is already used by a website service.
    #' @param domain_service Indicates if the domain already exists as a domain service on the account.
    #' @param service Service catalog details for the domain's TLD.
    #' @param whois_privacy Whether Whois privacy is available for the TLD.
    #' @param new Calculated registration price, when available.
    #' @param renewal Calculated renewal price, when available.
    #' @param transfer Calculated transfer price, when available.
    #' @param fields Registrar field requirements for this domain/TLD.
    #' @param currencies Pricing information normalized to supported currencies.
    #' @param ... Other optional arguments.
    initialize = function(`available` = NULL, `premium` = NULL, `website` = NULL, `domain_service` = NULL, `service` = NULL, `whois_privacy` = NULL, `new` = NULL, `renewal` = NULL, `transfer` = NULL, `fields` = NULL, `currencies` = NULL, ...) {
      if (!is.null(`available`)) {
        if (!(is.logical(`available`) && length(`available`) == 1)) {
          stop(paste("Error! Invalid data for `available`. Must be a boolean:", `available`))
        }
        self$`available` <- `available`
      }
      if (!is.null(`premium`)) {
        if (!(is.logical(`premium`) && length(`premium`) == 1)) {
          stop(paste("Error! Invalid data for `premium`. Must be a boolean:", `premium`))
        }
        self$`premium` <- `premium`
      }
      if (!is.null(`website`)) {
        if (!(is.logical(`website`) && length(`website`) == 1)) {
          stop(paste("Error! Invalid data for `website`. Must be a boolean:", `website`))
        }
        self$`website` <- `website`
      }
      if (!is.null(`domain_service`)) {
        if (!(is.logical(`domain_service`) && length(`domain_service`) == 1)) {
          stop(paste("Error! Invalid data for `domain_service`. Must be a boolean:", `domain_service`))
        }
        self$`domain_service` <- `domain_service`
      }
      if (!is.null(`service`)) {
        self$`service` <- `service`
      }
      if (!is.null(`whois_privacy`)) {
        if (!(is.logical(`whois_privacy`) && length(`whois_privacy`) == 1)) {
          stop(paste("Error! Invalid data for `whois_privacy`. Must be a boolean:", `whois_privacy`))
        }
        self$`whois_privacy` <- `whois_privacy`
      }
      if (!is.null(`new`)) {
        if (!(is.character(`new`) && length(`new`) == 1)) {
          stop(paste("Error! Invalid data for `new`. Must be a string:", `new`))
        }
        self$`new` <- `new`
      }
      if (!is.null(`renewal`)) {
        if (!(is.character(`renewal`) && length(`renewal`) == 1)) {
          stop(paste("Error! Invalid data for `renewal`. Must be a string:", `renewal`))
        }
        self$`renewal` <- `renewal`
      }
      if (!is.null(`transfer`)) {
        if (!(is.character(`transfer`) && length(`transfer`) == 1)) {
          stop(paste("Error! Invalid data for `transfer`. Must be a string:", `transfer`))
        }
        self$`transfer` <- `transfer`
      }
      if (!is.null(`fields`)) {
        self$`fields` <- `fields`
      }
      if (!is.null(`currencies`)) {
        self$`currencies` <- `currencies`
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
    #' @return DomainLookupResponse as a base R list.
    #' @examples
    #' # convert array of DomainLookupResponse (x) to a data frame
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
    #' Convert DomainLookupResponse to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      DomainLookupResponseObject <- list()
      if (!is.null(self$`available`)) {
        DomainLookupResponseObject[["available"]] <-
          self$`available`
      }
      if (!is.null(self$`premium`)) {
        DomainLookupResponseObject[["premium"]] <-
          self$`premium`
      }
      if (!is.null(self$`website`)) {
        DomainLookupResponseObject[["website"]] <-
          self$`website`
      }
      if (!is.null(self$`domain_service`)) {
        DomainLookupResponseObject[["domain_service"]] <-
          self$`domain_service`
      }
      if (!is.null(self$`service`)) {
        DomainLookupResponseObject[["service"]] <-
          self$`service`
      }
      if (!is.null(self$`whois_privacy`)) {
        DomainLookupResponseObject[["whois_privacy"]] <-
          self$`whois_privacy`
      }
      if (!is.null(self$`new`)) {
        DomainLookupResponseObject[["new"]] <-
          self$`new`
      }
      if (!is.null(self$`renewal`)) {
        DomainLookupResponseObject[["renewal"]] <-
          self$`renewal`
      }
      if (!is.null(self$`transfer`)) {
        DomainLookupResponseObject[["transfer"]] <-
          self$`transfer`
      }
      if (!is.null(self$`fields`)) {
        DomainLookupResponseObject[["fields"]] <-
          self$`fields`
      }
      if (!is.null(self$`currencies`)) {
        DomainLookupResponseObject[["currencies"]] <-
          self$`currencies`
      }
      return(DomainLookupResponseObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainLookupResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainLookupResponse
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`available`)) {
        self$`available` <- this_object$`available`
      }
      if (!is.null(this_object$`premium`)) {
        self$`premium` <- this_object$`premium`
      }
      if (!is.null(this_object$`website`)) {
        self$`website` <- this_object$`website`
      }
      if (!is.null(this_object$`domain_service`)) {
        self$`domain_service` <- this_object$`domain_service`
      }
      if (!is.null(this_object$`service`)) {
        self$`service` <- this_object$`service`
      }
      if (!is.null(this_object$`whois_privacy`)) {
        self$`whois_privacy` <- this_object$`whois_privacy`
      }
      if (!is.null(this_object$`new`)) {
        self$`new` <- this_object$`new`
      }
      if (!is.null(this_object$`renewal`)) {
        self$`renewal` <- this_object$`renewal`
      }
      if (!is.null(this_object$`transfer`)) {
        self$`transfer` <- this_object$`transfer`
      }
      if (!is.null(this_object$`fields`)) {
        self$`fields` <- this_object$`fields`
      }
      if (!is.null(this_object$`currencies`)) {
        self$`currencies` <- this_object$`currencies`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return DomainLookupResponse in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of DomainLookupResponse
    #'
    #' @param input_json the JSON input
    #' @return the instance of DomainLookupResponse
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`available` <- this_object$`available`
      self$`premium` <- this_object$`premium`
      self$`website` <- this_object$`website`
      self$`domain_service` <- this_object$`domain_service`
      self$`service` <- this_object$`service`
      self$`whois_privacy` <- this_object$`whois_privacy`
      self$`new` <- this_object$`new`
      self$`renewal` <- this_object$`renewal`
      self$`transfer` <- this_object$`transfer`
      self$`fields` <- this_object$`fields`
      self$`currencies` <- this_object$`currencies`
      self
    },

    #' @description
    #' Validate JSON input with respect to DomainLookupResponse and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of DomainLookupResponse
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
# DomainLookupResponse$unlock()
#
## Below is an example to define the print function
# DomainLookupResponse$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# DomainLookupResponse$lock()

