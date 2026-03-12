(ns inter-server-management-api.specs.domain-row
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def domain-row-data
  {
   (ds/opt :domain_id) string?
   (ds/opt :domain_hostname) string?
   (ds/opt :domain_expire_date) string?
   (ds/opt :cost) string?
   (ds/opt :domain_status) string?
   })

(def domain-row-spec
  (ds/spec
    {:name ::domain-row
     :spec domain-row-data}))
