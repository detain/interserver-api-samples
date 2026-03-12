(ns inter-server-management-api.specs.backup-row
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def backup-row-data
  {
   (ds/opt :backup_id) string?
   (ds/opt :backup_name) string?
   (ds/opt :backup_cost) string?
   (ds/opt :backup_username) string?
   (ds/opt :backup_status) string?
   (ds/opt :services_name) string?
   })

(def backup-row-spec
  (ds/spec
    {:name ::backup-row
     :spec backup-row-data}))
