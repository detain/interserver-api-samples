(ns inter-server-management-api.specs.mail-alerts-response
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def mail-alerts-response-data
  {
   })

(def mail-alerts-response-spec
  (ds/spec
    {:name ::mail-alerts-response
     :spec mail-alerts-response-data}))
