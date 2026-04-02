#' Create a new VpsServiceMaster
#'
#' @description
#' Information about the host node (hypervisor) running this VPS, including hardware specs and resource utilization.
#'
#' @docType class
#' @title VpsServiceMaster
#' @description VpsServiceMaster Class
#' @format An \code{R6Class} generator object
#' @field vps_id VPS ID character [optional]
#' @field vps_name VPS name character [optional]
#' @field vps_ip IP address of the VPS character [optional]
#' @field vps_type VPS type character [optional]
#' @field vps_hdsize Hard drive size character [optional]
#' @field vps_hdfree Free hard drive space character [optional]
#' @field vps_bits Bits character [optional]
#' @field vps_load CPU load character [optional]
#' @field vps_ram RAM character [optional]
#' @field vps_cpu_model CPU model character [optional]
#' @field vps_cpu_mhz CPU frequency in MHz character [optional]
#' @field vps_location Location of the VPS character [optional]
#' @field vps_last_update Last update date character [optional]
#' @field vps_raid_building RAID building status character [optional]
#' @field vps_kernel Kernel version character [optional]
#' @field vps_available Available character [optional]
#' @field vps_cores Number of CPU cores character [optional]
#' @field vps_iowait I/O wait character [optional]
#' @field vps_raid_status RAID status character [optional]
#' @field vps_mounts Mounts character [optional]
#' @field vps_server_max Maximum number of servers character [optional]
#' @field vps_server_max_slices Maximum number of server slices character [optional]
#' @field vps_drive_type Drive type character [optional]
#' @field vps_order Order number character [optional]
#' @importFrom R6 R6Class
#' @importFrom jsonlite fromJSON toJSON
#' @export
VpsServiceMaster <- R6::R6Class(
  "VpsServiceMaster",
  public = list(
    `vps_id` = NULL,
    `vps_name` = NULL,
    `vps_ip` = NULL,
    `vps_type` = NULL,
    `vps_hdsize` = NULL,
    `vps_hdfree` = NULL,
    `vps_bits` = NULL,
    `vps_load` = NULL,
    `vps_ram` = NULL,
    `vps_cpu_model` = NULL,
    `vps_cpu_mhz` = NULL,
    `vps_location` = NULL,
    `vps_last_update` = NULL,
    `vps_raid_building` = NULL,
    `vps_kernel` = NULL,
    `vps_available` = NULL,
    `vps_cores` = NULL,
    `vps_iowait` = NULL,
    `vps_raid_status` = NULL,
    `vps_mounts` = NULL,
    `vps_server_max` = NULL,
    `vps_server_max_slices` = NULL,
    `vps_drive_type` = NULL,
    `vps_order` = NULL,

    #' @description
    #' Initialize a new VpsServiceMaster class.
    #'
    #' @param vps_id VPS ID
    #' @param vps_name VPS name
    #' @param vps_ip IP address of the VPS
    #' @param vps_type VPS type
    #' @param vps_hdsize Hard drive size
    #' @param vps_hdfree Free hard drive space
    #' @param vps_bits Bits
    #' @param vps_load CPU load
    #' @param vps_ram RAM
    #' @param vps_cpu_model CPU model
    #' @param vps_cpu_mhz CPU frequency in MHz
    #' @param vps_location Location of the VPS
    #' @param vps_last_update Last update date
    #' @param vps_raid_building RAID building status
    #' @param vps_kernel Kernel version
    #' @param vps_available Available
    #' @param vps_cores Number of CPU cores
    #' @param vps_iowait I/O wait
    #' @param vps_raid_status RAID status
    #' @param vps_mounts Mounts
    #' @param vps_server_max Maximum number of servers
    #' @param vps_server_max_slices Maximum number of server slices
    #' @param vps_drive_type Drive type
    #' @param vps_order Order number
    #' @param ... Other optional arguments.
    initialize = function(`vps_id` = NULL, `vps_name` = NULL, `vps_ip` = NULL, `vps_type` = NULL, `vps_hdsize` = NULL, `vps_hdfree` = NULL, `vps_bits` = NULL, `vps_load` = NULL, `vps_ram` = NULL, `vps_cpu_model` = NULL, `vps_cpu_mhz` = NULL, `vps_location` = NULL, `vps_last_update` = NULL, `vps_raid_building` = NULL, `vps_kernel` = NULL, `vps_available` = NULL, `vps_cores` = NULL, `vps_iowait` = NULL, `vps_raid_status` = NULL, `vps_mounts` = NULL, `vps_server_max` = NULL, `vps_server_max_slices` = NULL, `vps_drive_type` = NULL, `vps_order` = NULL, ...) {
      if (!is.null(`vps_id`)) {
        if (!(is.character(`vps_id`) && length(`vps_id`) == 1)) {
          stop(paste("Error! Invalid data for `vps_id`. Must be a string:", `vps_id`))
        }
        self$`vps_id` <- `vps_id`
      }
      if (!is.null(`vps_name`)) {
        if (!(is.character(`vps_name`) && length(`vps_name`) == 1)) {
          stop(paste("Error! Invalid data for `vps_name`. Must be a string:", `vps_name`))
        }
        self$`vps_name` <- `vps_name`
      }
      if (!is.null(`vps_ip`)) {
        if (!(is.character(`vps_ip`) && length(`vps_ip`) == 1)) {
          stop(paste("Error! Invalid data for `vps_ip`. Must be a string:", `vps_ip`))
        }
        self$`vps_ip` <- `vps_ip`
      }
      if (!is.null(`vps_type`)) {
        if (!(is.character(`vps_type`) && length(`vps_type`) == 1)) {
          stop(paste("Error! Invalid data for `vps_type`. Must be a string:", `vps_type`))
        }
        self$`vps_type` <- `vps_type`
      }
      if (!is.null(`vps_hdsize`)) {
        if (!(is.character(`vps_hdsize`) && length(`vps_hdsize`) == 1)) {
          stop(paste("Error! Invalid data for `vps_hdsize`. Must be a string:", `vps_hdsize`))
        }
        self$`vps_hdsize` <- `vps_hdsize`
      }
      if (!is.null(`vps_hdfree`)) {
        if (!(is.character(`vps_hdfree`) && length(`vps_hdfree`) == 1)) {
          stop(paste("Error! Invalid data for `vps_hdfree`. Must be a string:", `vps_hdfree`))
        }
        self$`vps_hdfree` <- `vps_hdfree`
      }
      if (!is.null(`vps_bits`)) {
        if (!(is.character(`vps_bits`) && length(`vps_bits`) == 1)) {
          stop(paste("Error! Invalid data for `vps_bits`. Must be a string:", `vps_bits`))
        }
        self$`vps_bits` <- `vps_bits`
      }
      if (!is.null(`vps_load`)) {
        if (!(is.character(`vps_load`) && length(`vps_load`) == 1)) {
          stop(paste("Error! Invalid data for `vps_load`. Must be a string:", `vps_load`))
        }
        self$`vps_load` <- `vps_load`
      }
      if (!is.null(`vps_ram`)) {
        if (!(is.character(`vps_ram`) && length(`vps_ram`) == 1)) {
          stop(paste("Error! Invalid data for `vps_ram`. Must be a string:", `vps_ram`))
        }
        self$`vps_ram` <- `vps_ram`
      }
      if (!is.null(`vps_cpu_model`)) {
        if (!(is.character(`vps_cpu_model`) && length(`vps_cpu_model`) == 1)) {
          stop(paste("Error! Invalid data for `vps_cpu_model`. Must be a string:", `vps_cpu_model`))
        }
        self$`vps_cpu_model` <- `vps_cpu_model`
      }
      if (!is.null(`vps_cpu_mhz`)) {
        if (!(is.character(`vps_cpu_mhz`) && length(`vps_cpu_mhz`) == 1)) {
          stop(paste("Error! Invalid data for `vps_cpu_mhz`. Must be a string:", `vps_cpu_mhz`))
        }
        self$`vps_cpu_mhz` <- `vps_cpu_mhz`
      }
      if (!is.null(`vps_location`)) {
        if (!(is.character(`vps_location`) && length(`vps_location`) == 1)) {
          stop(paste("Error! Invalid data for `vps_location`. Must be a string:", `vps_location`))
        }
        self$`vps_location` <- `vps_location`
      }
      if (!is.null(`vps_last_update`)) {
        if (!(is.character(`vps_last_update`) && length(`vps_last_update`) == 1)) {
          stop(paste("Error! Invalid data for `vps_last_update`. Must be a string:", `vps_last_update`))
        }
        self$`vps_last_update` <- `vps_last_update`
      }
      if (!is.null(`vps_raid_building`)) {
        if (!(is.character(`vps_raid_building`) && length(`vps_raid_building`) == 1)) {
          stop(paste("Error! Invalid data for `vps_raid_building`. Must be a string:", `vps_raid_building`))
        }
        self$`vps_raid_building` <- `vps_raid_building`
      }
      if (!is.null(`vps_kernel`)) {
        if (!(is.character(`vps_kernel`) && length(`vps_kernel`) == 1)) {
          stop(paste("Error! Invalid data for `vps_kernel`. Must be a string:", `vps_kernel`))
        }
        self$`vps_kernel` <- `vps_kernel`
      }
      if (!is.null(`vps_available`)) {
        if (!(is.character(`vps_available`) && length(`vps_available`) == 1)) {
          stop(paste("Error! Invalid data for `vps_available`. Must be a string:", `vps_available`))
        }
        self$`vps_available` <- `vps_available`
      }
      if (!is.null(`vps_cores`)) {
        if (!(is.character(`vps_cores`) && length(`vps_cores`) == 1)) {
          stop(paste("Error! Invalid data for `vps_cores`. Must be a string:", `vps_cores`))
        }
        self$`vps_cores` <- `vps_cores`
      }
      if (!is.null(`vps_iowait`)) {
        if (!(is.character(`vps_iowait`) && length(`vps_iowait`) == 1)) {
          stop(paste("Error! Invalid data for `vps_iowait`. Must be a string:", `vps_iowait`))
        }
        self$`vps_iowait` <- `vps_iowait`
      }
      if (!is.null(`vps_raid_status`)) {
        if (!(is.character(`vps_raid_status`) && length(`vps_raid_status`) == 1)) {
          stop(paste("Error! Invalid data for `vps_raid_status`. Must be a string:", `vps_raid_status`))
        }
        self$`vps_raid_status` <- `vps_raid_status`
      }
      if (!is.null(`vps_mounts`)) {
        if (!(is.character(`vps_mounts`) && length(`vps_mounts`) == 1)) {
          stop(paste("Error! Invalid data for `vps_mounts`. Must be a string:", `vps_mounts`))
        }
        self$`vps_mounts` <- `vps_mounts`
      }
      if (!is.null(`vps_server_max`)) {
        if (!(is.character(`vps_server_max`) && length(`vps_server_max`) == 1)) {
          stop(paste("Error! Invalid data for `vps_server_max`. Must be a string:", `vps_server_max`))
        }
        self$`vps_server_max` <- `vps_server_max`
      }
      if (!is.null(`vps_server_max_slices`)) {
        if (!(is.character(`vps_server_max_slices`) && length(`vps_server_max_slices`) == 1)) {
          stop(paste("Error! Invalid data for `vps_server_max_slices`. Must be a string:", `vps_server_max_slices`))
        }
        self$`vps_server_max_slices` <- `vps_server_max_slices`
      }
      if (!is.null(`vps_drive_type`)) {
        if (!(is.character(`vps_drive_type`) && length(`vps_drive_type`) == 1)) {
          stop(paste("Error! Invalid data for `vps_drive_type`. Must be a string:", `vps_drive_type`))
        }
        self$`vps_drive_type` <- `vps_drive_type`
      }
      if (!is.null(`vps_order`)) {
        if (!(is.character(`vps_order`) && length(`vps_order`) == 1)) {
          stop(paste("Error! Invalid data for `vps_order`. Must be a string:", `vps_order`))
        }
        self$`vps_order` <- `vps_order`
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
    #' @return VpsServiceMaster as a base R list.
    #' @examples
    #' # convert array of VpsServiceMaster (x) to a data frame
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
    #' Convert VpsServiceMaster to a base R type
    #'
    #' @return A base R type, e.g. a list or numeric/character array.
    toSimpleType = function() {
      VpsServiceMasterObject <- list()
      if (!is.null(self$`vps_id`)) {
        VpsServiceMasterObject[["vps_id"]] <-
          self$`vps_id`
      }
      if (!is.null(self$`vps_name`)) {
        VpsServiceMasterObject[["vps_name"]] <-
          self$`vps_name`
      }
      if (!is.null(self$`vps_ip`)) {
        VpsServiceMasterObject[["vps_ip"]] <-
          self$`vps_ip`
      }
      if (!is.null(self$`vps_type`)) {
        VpsServiceMasterObject[["vps_type"]] <-
          self$`vps_type`
      }
      if (!is.null(self$`vps_hdsize`)) {
        VpsServiceMasterObject[["vps_hdsize"]] <-
          self$`vps_hdsize`
      }
      if (!is.null(self$`vps_hdfree`)) {
        VpsServiceMasterObject[["vps_hdfree"]] <-
          self$`vps_hdfree`
      }
      if (!is.null(self$`vps_bits`)) {
        VpsServiceMasterObject[["vps_bits"]] <-
          self$`vps_bits`
      }
      if (!is.null(self$`vps_load`)) {
        VpsServiceMasterObject[["vps_load"]] <-
          self$`vps_load`
      }
      if (!is.null(self$`vps_ram`)) {
        VpsServiceMasterObject[["vps_ram"]] <-
          self$`vps_ram`
      }
      if (!is.null(self$`vps_cpu_model`)) {
        VpsServiceMasterObject[["vps_cpu_model"]] <-
          self$`vps_cpu_model`
      }
      if (!is.null(self$`vps_cpu_mhz`)) {
        VpsServiceMasterObject[["vps_cpu_mhz"]] <-
          self$`vps_cpu_mhz`
      }
      if (!is.null(self$`vps_location`)) {
        VpsServiceMasterObject[["vps_location"]] <-
          self$`vps_location`
      }
      if (!is.null(self$`vps_last_update`)) {
        VpsServiceMasterObject[["vps_last_update"]] <-
          self$`vps_last_update`
      }
      if (!is.null(self$`vps_raid_building`)) {
        VpsServiceMasterObject[["vps_raid_building"]] <-
          self$`vps_raid_building`
      }
      if (!is.null(self$`vps_kernel`)) {
        VpsServiceMasterObject[["vps_kernel"]] <-
          self$`vps_kernel`
      }
      if (!is.null(self$`vps_available`)) {
        VpsServiceMasterObject[["vps_available"]] <-
          self$`vps_available`
      }
      if (!is.null(self$`vps_cores`)) {
        VpsServiceMasterObject[["vps_cores"]] <-
          self$`vps_cores`
      }
      if (!is.null(self$`vps_iowait`)) {
        VpsServiceMasterObject[["vps_iowait"]] <-
          self$`vps_iowait`
      }
      if (!is.null(self$`vps_raid_status`)) {
        VpsServiceMasterObject[["vps_raid_status"]] <-
          self$`vps_raid_status`
      }
      if (!is.null(self$`vps_mounts`)) {
        VpsServiceMasterObject[["vps_mounts"]] <-
          self$`vps_mounts`
      }
      if (!is.null(self$`vps_server_max`)) {
        VpsServiceMasterObject[["vps_server_max"]] <-
          self$`vps_server_max`
      }
      if (!is.null(self$`vps_server_max_slices`)) {
        VpsServiceMasterObject[["vps_server_max_slices"]] <-
          self$`vps_server_max_slices`
      }
      if (!is.null(self$`vps_drive_type`)) {
        VpsServiceMasterObject[["vps_drive_type"]] <-
          self$`vps_drive_type`
      }
      if (!is.null(self$`vps_order`)) {
        VpsServiceMasterObject[["vps_order"]] <-
          self$`vps_order`
      }
      return(VpsServiceMasterObject)
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsServiceMaster
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsServiceMaster
    fromJSON = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      if (!is.null(this_object$`vps_id`)) {
        self$`vps_id` <- this_object$`vps_id`
      }
      if (!is.null(this_object$`vps_name`)) {
        self$`vps_name` <- this_object$`vps_name`
      }
      if (!is.null(this_object$`vps_ip`)) {
        self$`vps_ip` <- this_object$`vps_ip`
      }
      if (!is.null(this_object$`vps_type`)) {
        self$`vps_type` <- this_object$`vps_type`
      }
      if (!is.null(this_object$`vps_hdsize`)) {
        self$`vps_hdsize` <- this_object$`vps_hdsize`
      }
      if (!is.null(this_object$`vps_hdfree`)) {
        self$`vps_hdfree` <- this_object$`vps_hdfree`
      }
      if (!is.null(this_object$`vps_bits`)) {
        self$`vps_bits` <- this_object$`vps_bits`
      }
      if (!is.null(this_object$`vps_load`)) {
        self$`vps_load` <- this_object$`vps_load`
      }
      if (!is.null(this_object$`vps_ram`)) {
        self$`vps_ram` <- this_object$`vps_ram`
      }
      if (!is.null(this_object$`vps_cpu_model`)) {
        self$`vps_cpu_model` <- this_object$`vps_cpu_model`
      }
      if (!is.null(this_object$`vps_cpu_mhz`)) {
        self$`vps_cpu_mhz` <- this_object$`vps_cpu_mhz`
      }
      if (!is.null(this_object$`vps_location`)) {
        self$`vps_location` <- this_object$`vps_location`
      }
      if (!is.null(this_object$`vps_last_update`)) {
        self$`vps_last_update` <- this_object$`vps_last_update`
      }
      if (!is.null(this_object$`vps_raid_building`)) {
        self$`vps_raid_building` <- this_object$`vps_raid_building`
      }
      if (!is.null(this_object$`vps_kernel`)) {
        self$`vps_kernel` <- this_object$`vps_kernel`
      }
      if (!is.null(this_object$`vps_available`)) {
        self$`vps_available` <- this_object$`vps_available`
      }
      if (!is.null(this_object$`vps_cores`)) {
        self$`vps_cores` <- this_object$`vps_cores`
      }
      if (!is.null(this_object$`vps_iowait`)) {
        self$`vps_iowait` <- this_object$`vps_iowait`
      }
      if (!is.null(this_object$`vps_raid_status`)) {
        self$`vps_raid_status` <- this_object$`vps_raid_status`
      }
      if (!is.null(this_object$`vps_mounts`)) {
        self$`vps_mounts` <- this_object$`vps_mounts`
      }
      if (!is.null(this_object$`vps_server_max`)) {
        self$`vps_server_max` <- this_object$`vps_server_max`
      }
      if (!is.null(this_object$`vps_server_max_slices`)) {
        self$`vps_server_max_slices` <- this_object$`vps_server_max_slices`
      }
      if (!is.null(this_object$`vps_drive_type`)) {
        self$`vps_drive_type` <- this_object$`vps_drive_type`
      }
      if (!is.null(this_object$`vps_order`)) {
        self$`vps_order` <- this_object$`vps_order`
      }
      self
    },

    #' @description
    #' To JSON String
    #' 
    #' @param ... Parameters passed to `jsonlite::toJSON`
    #' @return VpsServiceMaster in JSON format
    toJSONString = function(...) {
      simple <- self$toSimpleType()
      json <- jsonlite::toJSON(simple, auto_unbox = TRUE, digits = NA, ...)
      return(as.character(jsonlite::minify(json)))
    },

    #' @description
    #' Deserialize JSON string into an instance of VpsServiceMaster
    #'
    #' @param input_json the JSON input
    #' @return the instance of VpsServiceMaster
    fromJSONString = function(input_json) {
      this_object <- jsonlite::fromJSON(input_json)
      self$`vps_id` <- this_object$`vps_id`
      self$`vps_name` <- this_object$`vps_name`
      self$`vps_ip` <- this_object$`vps_ip`
      self$`vps_type` <- this_object$`vps_type`
      self$`vps_hdsize` <- this_object$`vps_hdsize`
      self$`vps_hdfree` <- this_object$`vps_hdfree`
      self$`vps_bits` <- this_object$`vps_bits`
      self$`vps_load` <- this_object$`vps_load`
      self$`vps_ram` <- this_object$`vps_ram`
      self$`vps_cpu_model` <- this_object$`vps_cpu_model`
      self$`vps_cpu_mhz` <- this_object$`vps_cpu_mhz`
      self$`vps_location` <- this_object$`vps_location`
      self$`vps_last_update` <- this_object$`vps_last_update`
      self$`vps_raid_building` <- this_object$`vps_raid_building`
      self$`vps_kernel` <- this_object$`vps_kernel`
      self$`vps_available` <- this_object$`vps_available`
      self$`vps_cores` <- this_object$`vps_cores`
      self$`vps_iowait` <- this_object$`vps_iowait`
      self$`vps_raid_status` <- this_object$`vps_raid_status`
      self$`vps_mounts` <- this_object$`vps_mounts`
      self$`vps_server_max` <- this_object$`vps_server_max`
      self$`vps_server_max_slices` <- this_object$`vps_server_max_slices`
      self$`vps_drive_type` <- this_object$`vps_drive_type`
      self$`vps_order` <- this_object$`vps_order`
      self
    },

    #' @description
    #' Validate JSON input with respect to VpsServiceMaster and throw an exception if invalid
    #'
    #' @param input the JSON input
    validateJSON = function(input) {
      input_json <- jsonlite::fromJSON(input)
    },

    #' @description
    #' To string (JSON format)
    #'
    #' @return String representation of VpsServiceMaster
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
# VpsServiceMaster$unlock()
#
## Below is an example to define the print function
# VpsServiceMaster$set("public", "print", function(...) {
#   print(jsonlite::prettify(self$toJSONString()))
#   invisible(self)
# })
## Uncomment below to lock the class to prevent modifications to the method or field
# VpsServiceMaster$lock()

