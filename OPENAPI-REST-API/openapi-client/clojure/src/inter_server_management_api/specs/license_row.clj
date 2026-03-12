(ns inter-server-management-api.specs.license-row
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def license-row-data
  {
   (ds/opt :license_id) string?
   (ds/opt :license_hostname) string?
   (ds/opt :license_ip) string?
   (ds/opt :services_name) string?
   (ds/opt :cost) string?
   (ds/opt :license_status) string?
   (ds/opt :invoices_paid) string?
   (ds/opt :invoices_date) inst?
   })

(def license-row-spec
  (ds/spec
    {:name ::license-row
     :spec license-row-data}))
