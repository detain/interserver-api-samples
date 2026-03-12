(ns inter-server-management-api.specs.server-row
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def server-row-data
  {
   (ds/req :server_id) string?
   (ds/req :account_lid) string?
   (ds/req :server_hostname) string?
   (ds/req :server_status) string?
   })

(def server-row-spec
  (ds/spec
    {:name ::server-row
     :spec server-row-data}))
