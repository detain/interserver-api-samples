(ns inter-server-management-api.specs.tickets-count-array
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            )
  (:import (java.io File)))


(def tickets-count-array-data
  {
   (ds/opt :Open) int?
   (ds/opt :OnHold) int?
   (ds/opt :Closed) int?
   })

(def tickets-count-array-spec
  (ds/spec
    {:name ::tickets-count-array
     :spec tickets-count-array-data}))
