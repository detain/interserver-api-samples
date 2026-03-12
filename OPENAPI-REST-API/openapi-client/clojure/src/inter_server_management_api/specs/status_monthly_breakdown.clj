(ns inter-server-management-api.specs.status-monthly-breakdown
  (:require [clojure.spec.alpha :as s]
            [spec-tools.data-spec :as ds]
            [inter-server-management-api.specs.monthly-counts :refer :all]
            [inter-server-management-api.specs.monthly-counts :refer :all]
            [inter-server-management-api.specs.monthly-counts :refer :all]
            [inter-server-management-api.specs.monthly-counts :refer :all]
            [inter-server-management-api.specs.monthly-counts :refer :all]
            [inter-server-management-api.specs.monthly-counts :refer :all]
            )
  (:import (java.io File)))


(def status-monthly-breakdown-data
  {
   (ds/req :default) monthly-counts-spec
   (ds/req :failed) monthly-counts-spec
   (ds/req :rejected) monthly-counts-spec
   (ds/req :pending) monthly-counts-spec
   (ds/req :locked) monthly-counts-spec
   (ds/req :paid) monthly-counts-spec
   })

(def status-monthly-breakdown-spec
  (ds/spec
    {:name ::status-monthly-breakdown
     :spec status-monthly-breakdown-data}))
