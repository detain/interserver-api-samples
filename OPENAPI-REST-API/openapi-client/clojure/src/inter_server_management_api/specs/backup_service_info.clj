(ns inter-server-management-api.specs.backup-service-info
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def backup-service-info-data
  {
   (ds/opt :backup_id) string?
   (ds/opt :backup_server) string?
   (ds/opt :backup_username) string?
   (ds/opt :backup_type) string?
   (ds/opt :backup_currency) string?
   (ds/opt :backup_order_date) string?
   (ds/opt :backup_custid) string?
   (ds/opt :backup_quota) string?
   (ds/opt :backup_ip) string?
   (ds/opt :backup_status) string?
   (ds/opt :backup_invoice) string?
   (ds/opt :backup_coupon) string?
   (ds/opt :backup_extra) string?
   (ds/opt :backup_server_status) string?
   (ds/opt :backup_comment) string?
   })

(def backup-service-info-spec
  (ds/spec
    {:name ::backup-service-info
     :spec backup-service-info-data}))
