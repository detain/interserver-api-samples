(ns inter-server-management-api.specs.backup-service-master
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def backup-service-master-data
  {
   (ds/opt :backup_id) int?
   (ds/opt :backup_name) string?
   (ds/opt :backup_ip) string?
   (ds/opt :backup_type) int?
   (ds/opt :backup_hdsize) int?
   (ds/opt :backup_hdfree) int?
   (ds/opt :backup_last_update) string?
   (ds/opt :backup_available) int?
   (ds/opt :backup_iowait) int?
   (ds/opt :backup_order) int?
   })

(def backup-service-master-spec
  (ds/spec
    {:name ::backup-service-master
     :spec backup-service-master-data}))
