(ns inter-server-management-api.specs.ticket-custom-field-details
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def ticket-custom-field-details-data
  {
   (ds/opt :CustomerServerAccess) string?
   (ds/opt :IpAddress) string?
   (ds/opt :RootPassword) string?
   (ds/opt :SudoUser) string?
   (ds/opt :SudoPassword) int?
   (ds/opt :Port) int?
   })

(def ticket-custom-field-details-spec
  (ds/spec
    {:name ::ticket-custom-field-details
     :spec ticket-custom-field-details-data}))
