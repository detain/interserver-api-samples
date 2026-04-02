#' Create a new ConfigLists
#'
#' @description
#' All available configuration options (CPU, memory, storage, bandwidth, OS, control panel, RAID) for building a dedicated server order.
#'
#' @docType class
#' @title ConfigLists
#' @description ConfigLists Class
#' @format An \code{R6Class} generator object
#' @field cpu_li  named list(\link{Cpu}) [optional]
#' @field memory_li  named list(named list(\link{MemoryOption})) [optional]
#' @field hd_li  named list(named list(\link{HardDrive})) [optional]
#' @field bandwidth_li  named list(\link{Bandwidth}) [optional]
#' @field ips_li  named list(\link{IpBlock}) [optional]
#' @field os_li  named list(\link{OperatingSystem}) [optional]
#' @field cp_li  named list(\link{ControlPanel}) [optional]
#' @field raid_li  list(\link{RaidOption}) [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
ConfigLists <- R6::R6Class(
  "ConfigLists",
  public = list(
    `cpu_li` = NULL,
    `memory_li` = NULL,
    `hd_li` = NULL,
    `bandwidth_li` = NULL,
    `ips_li` = NULL,
    `os_li` = NULL,
    `cp_li` = NULL,
    `raid_li` = NULL,

    #' @description
    #' Initialize a new ConfigLists class.
    #'
    #' @param cpu_li cpu_li
    #' @param memory_li memory_li
    #' @param hd_li hd_li
    #' @param bandwidth_li bandwidth_li
    #' @param ips_li ips_li
    #' @param os_li os_li
    #' @param cp_li cp_li
    #' @param raid_li raid_li
    #' @param ... Other optional arguments.
    initialize = function(`cpu_li` = NULL, `memory_li` = NULL, `hd_li` = NULL, `bandwidth_li` = NULL, `ips_li` = NULL, `os_li` = NULL, `cp_li` = NULL, `raid_li` = NULL, ...) {
      if (!is.null(`cpu_li`)) {
        stopifnot(is.vector(`cpu_li`), length(`cpu_li`) != 0)
        sapply(`cpu_li`, function(x) stopifnot(R6::is.R6(x)))
        self$`cpu_li` <- `cpu_li`
      }
      if (!is.null(`memory_li`)) {
        stopifnot(is.vector(`memory_li`), length(`memory_li`) != 0)
        sapply(`memory_li`, function(x) stopifnot(R6::is.R6(x)))
        self$`memory_li` <- `memory_li`
      }
      if (!is.null(`hd_li`)) {
        stopifnot(is.vector(`hd_li`), length(`hd_li`) != 0)
        sapply(`hd_li`, function(x) stopifnot(R6::is.R6(x)))
        self$`hd_li` <- `hd_li`
      }
      if (!is.null(`bandwidth_li`)) {
        stopifnot(is.vector(`bandwidth_li`), length(`bandwidth_li`) != 0)
        sapply(`bandwidth_li`, function(x) stopifnot(R6::is.R6(x)))
        self$`bandwidth_li` <- `bandwidth_li`
      }
      if (!is.null(`ips_li`)) {
        stopifnot(is.vector(`ips_li`), length(`ips_li`) != 0)
        sapply(`ips_li`, function(x) stopifnot(R6::is.R6(x)))
        self$`ips_li` <- `ips_li`
      }
      if (!is.null(`os_li`)) {
        stopifnot(is.vector(`os_li`), length(`os_li`) != 0)
        sapply(`os_li`, function(x) stopifnot(R6::is.R6(x)))
        self$`os_li` <- `os_li`
      }
      if (!is.null(`cp_li`)) {
        stopifnot(is.vector(`cp_li`), length(`cp_li`) != 0)
        sapply(`cp_li`, function(x) stopifnot(R6::is.R6(x)))
        self$`cp_li` <- `cp_li`
      }
      if (!is.null(`raid_li`)) {
        stopifnot(is.vector(`raid_li`), length(`raid_li`) != 0)
        sapply(`raid_li`, function(x) stopifnot(R6::is.R6(x)))
        self$`raid_li` <- `raid_li`
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
    #' @return ConfigLists as a base R list.
    #' @examples
    #' # convert array of ConfigLists (x) to a data frame
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
    #' Convert ConfigLists to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      ConfigListsObject <- list()
      if (!is.null(self$`cpu_li`)) {
        ConfigListsObject[["cpu_li"]] <-
          self$extractSimpleType(self$`cpu_li`)
      }
      if (!is.null(self$`memory_li`)) {
        ConfigListsObject[["memory_li"]] <-
          self$extractSimpleType(self$`memory_li`)
      }
      if (!is.null(self$`hd_li`)) {
        ConfigListsObject[["hd_li"]] <-
          self$extractSimpleType(self$`hd_li`)
      }
      if (!is.null(self$`bandwidth_li`)) {
        ConfigListsObject[["bandwidth_li"]] <-
          self$extractSimpleType(self$`bandwidth_li`)
      }
      if (!is.null(self$`ips_li`)) {
        ConfigListsObject[["ips_li"]] <-
          self$extractSimpleType(self$`ips_li`)
      }
      if (!is.null(self$`os_li`)) {
        ConfigListsObject[["os_li"]] <-
          self$extractSimpleType(self$`os_li`)
      }
      if (!is.null(self$`cp_li`)) {
        ConfigListsObject[["cp_li"]] <-
          self$extractSimpleType(self$`cp_li`)
      }
      if (!is.null(self$`raid_li`)) {
        ConfigListsObject[["raid_li"]] <-
          self$extractSimpleType(self$`raid_li`)
      }
      return(ConfigListsObject)
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
    #' Deserialize JSON string into an instance of ConfigLists
    #'
    #' @param input_json the JSON input
    #' @return the instance of ConfigLists
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`cpu_li`)) {
        self$`cpu_li` <- ApiClient$new()$deserializeObj(this_object$`cpu_li`, "map(Cpu)", loadNamespace("openapi"))
      }
      if (!is.null(this_object$`memory_li`)) {
        self$`memory_li` <- ApiClient$new()$deserializeObj(this_object$`memory_li`, "map(map(MemoryOption))", loadNamespace("openapi"))
      }
      if (!is.null(this_object$`hd_li`)) {
        self$`hd_li` <- ApiClient$new()$deserializeObj(this_object$`hd_li`, "map(map(HardDrive))", loadNamespace("openapi"))
      }
      if (!is.null(this_object$`bandwidth_li`)) {
        self$`bandwidth_li` <- ApiClient$new()$deserializeObj(this_object$`bandwidth_li`, "map(Bandwidth)", loadNamespace("openapi"))
      }
      if (!is.null(this_object$`ips_li`)) {
        self$`ips_li` <- ApiClient$new()$deserializeObj(this_object$`ips_li`, "map(IpBlock)", loadNamespace("openapi"))
      }
      if (!is.null(this_object$`os_li`)) {
        self$`os_li` <- ApiClient$new()$deserializeObj(this_object$`os_li`, "map(OperatingSystem)", loadNamespace("openapi"))
      }
      if (!is.null(this_object$`cp_li`)) {
        self$`cp_li` <- ApiClient$new()$deserializeObj(this_object$`cp_li`, "map(ControlPanel)", loadNamespace("openapi"))
      }
      if (!is.null(this_object$`raid_li`)) {
        self$`raid_li` <- ApiClient$new()$deserializeObj(this_object$`raid_li`, "array[RaidOption]", loadNamespace("openapi"))
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return ConfigLists in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of ConfigLists
    #'
    #' @param input_json the JSON input
    #' @return the instance of ConfigLists
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`cpu_li` <- ApiClient$new()$deserializeObj(this_object$`cpu_li`, "map(Cpu)", loadNamespace("openapi"))
      self$`memory_li` <- ApiClient$new()$deserializeObj(this_object$`memory_li`, "map(map(MemoryOption))", loadNamespace("openapi"))
      self$`hd_li` <- ApiClient$new()$deserializeObj(this_object$`hd_li`, "map(map(HardDrive))", loadNamespace("openapi"))
      self$`bandwidth_li` <- ApiClient$new()$deserializeObj(this_object$`bandwidth_li`, "map(Bandwidth)", loadNamespace("openapi"))
      self$`ips_li` <- ApiClient$new()$deserializeObj(this_object$`ips_li`, "map(IpBlock)", loadNamespace("openapi"))
      self$`os_li` <- ApiClient$new()$deserializeObj(this_object$`os_li`, "map(OperatingSystem)", loadNamespace("openapi"))
      self$`cp_li` <- ApiClient$new()$deserializeObj(this_object$`cp_li`, "map(ControlPanel)", loadNamespace("openapi"))
      self$`raid_li` <- ApiClient$new()$deserializeObj(this_object$`raid_li`, "array[RaidOption]", loadNamespace("openapi"))
      self
    },

    #' @description
    #' Validate JSON input with respect to ConfigLists and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of ConfigLists
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
# ConfigLists$unlock()
#
## Below is an example to define the print function
# ConfigLists$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# ConfigLists$lock()

