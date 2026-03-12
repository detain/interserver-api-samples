(ns inter-server-management-api.specs.account-info-data-fraudrecord
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def account-info-data-fraudrecord-data
  {
   (ds/opt :score) string?
   (ds/opt :count) string?
   (ds/opt :reliability) string?
   (ds/opt :code) string?
   })

(def account-info-data-fraudrecord-spec
  (ds/spec
    {:name ::account-info-data-fraudrecord
     :spec account-info-data-fraudrecord-data}))
