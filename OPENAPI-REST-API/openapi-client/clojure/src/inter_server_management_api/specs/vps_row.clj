(ns inter-server-management-api.specs.vps-row
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def vps-row-data
  {
   (ds/req :vps_id) string?
   (ds/req :vps_name) string?
   (ds/req :repeat_invoices_cost) string?
   (ds/req :vps_hostname) string?
   (ds/req :vps_ip) string?
   (ds/req :vps_status) string?
   (ds/req :services_name) string?
   (ds/req :vps_comment) string?
   })

(def vps-row-spec
  (ds/spec
    {:name ::vps-row
     :spec vps-row-data}))
