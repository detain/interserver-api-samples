(ns inter-server-management-api.specs.vps-service-master
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-service-master-data
  {
   (ds/opt :vps_id) string?
   (ds/opt :vps_name) string?
   (ds/opt :vps_ip) string?
   (ds/opt :vps_type) string?
   (ds/opt :vps_hdsize) string?
   (ds/opt :vps_hdfree) string?
   (ds/opt :vps_bits) string?
   (ds/opt :vps_load) string?
   (ds/opt :vps_ram) string?
   (ds/opt :vps_cpu_model) string?
   (ds/opt :vps_cpu_mhz) string?
   (ds/opt :vps_location) string?
   (ds/opt :vps_last_update) string?
   (ds/opt :vps_raid_building) string?
   (ds/opt :vps_kernel) string?
   (ds/opt :vps_available) string?
   (ds/opt :vps_cores) string?
   (ds/opt :vps_iowait) string?
   (ds/opt :vps_raid_status) string?
   (ds/opt :vps_mounts) string?
   (ds/opt :vps_server_max) string?
   (ds/opt :vps_server_max_slices) string?
   (ds/opt :vps_drive_type) string?
   (ds/opt :vps_order) string?
   })

(def vps-service-master-spec
  (ds/spec
    {:name ::vps-service-master
     :spec vps-service-master-data}))
