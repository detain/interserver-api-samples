(ns inter-server-management-api.specs.mail-order
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def mail-order-data
  {
   (ds/req :id) int?
   (ds/req :status) string?
   (ds/req :username) string?
   (ds/opt :comment) string?
   })

(def mail-order-spec
  (ds/spec
    {:name ::mail-order
     :spec mail-order-data}))
